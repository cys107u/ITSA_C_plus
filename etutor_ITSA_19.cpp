#include<iostream>
using namespace std;
void print_arr(int b,int n,int arr[])//debug��
{
    for(int i=b;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}

void swap(int *a,int *b)//�洫����ܼƪ���
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void car_time_update(int s, int d, int time[25])//��s�u�@�ɶ� �N�}�l���^�����q�ɶ��אּ1��ܦ��u�@
{
    for(int i=s;i<d;i++)
    {
        time[i]=1;
    }
}
int which_car(int s,int d,int total_car,int car_work_time[31][25])//�P�_�n����x�����o��s~d���u�@
{
    int can_work[total_car+1];//�ŧican_work�}�C�Ӧs�C�x�����i�u�@���A
    for(int i=1;i<=total_car;i++)
    {
        can_work[i]=1;//���N�C�x�������i�u�@
    }
    for(int i=1;i<=total_car;i++)//��C�x���P�_
    {
        for(int j=s;j<d;j++)//�q�}�l���^�ɶ�
        {
            if(car_work_time[i][j]==1)//���]�b�o�q�ɶ����x���w�g���u�@
            {
                can_work[i]=0;//�N���x���אּ����u�@
            }
        }
    }
    for(int i=1;i<=total_car;i++)//�q��1��̫�̧ǴM��C�x��
    {
        if(can_work[i])//�p�G���i�H�u�@�� �D0
        {
            return i;//����
        }
    }
    return 0;//������N�^��0
}



int main()
{
    int n, total_car=1;
    cin>>n;
    int s[n],d[n],car_work_time[31][25];// s:�X�o�ɶ� d:��^�ɶ� car_work_time[�Y�x��][0~24�p��]:���u�@�O1 �S�u�@�O0
    for(int i=0; i<n; i++)
    {
        cin>>s[i]>>d[i];//��J
    }
    for(int i=0;i<31;i++)
    {
        for(int j=0;j<25;j++)
        {
            car_work_time[i][j]=0;
        }
    }

    for(int i=n-1; i>=0; i--)//�̶}�l�ɶ�����ᰵ�Ƨ�
    {
        for(int j=0; j<i; j++)
        {
            if(s[j]>s[j+1])
            {
                swap(&s[j],&s[j+1]);
                swap(&d[j],&d[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {

        int choose_car=which_car(s[i],d[i],total_car,car_work_time);//��ܭ��x��
                        //printf("%d\n",choose_car);
        if(choose_car>0)//�p�G���O0��ܥثe���Y�x���i�H�u�@
        {
            car_time_update(s[i],d[i],car_work_time[choose_car]);//��s���x�����u�@�ɶ�
        }
        else//�O0�N��ܳ�����u�@->�[�s�����l
        {
            total_car++;
            choose_car=total_car;
            car_time_update(s[i],d[i],car_work_time[choose_car]);//��s�s���l���u�@�ɶ�
        }
        //printf("%d:\n",choose_car);
        //print_arr(1,25,car_work_time[choose_car]);
    }
    cout<<total_car<<"\n";
    return 0;
}
