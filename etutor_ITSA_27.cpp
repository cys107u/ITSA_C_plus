#include<iostream>

using namespace std;
void print_arr(int arr[4])//debug��
{
    for(int i=0;i<4;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}
void print_ans(int A,int B)//��X�XA�M�XB
{
    cout<<A<<"A"<<B<<"B"<<"\n";
}
void separate(int x,int arr[4])//��C�Ӧ�Ƥ��}�s�iarr[0~3]
{
    arr[0]=x/1000;//����̤j���s�i�}�C
    x-=arr[0]*1000;//�A��쥻���Ʀr�ű��s�n������
    arr[1]=x/100;
    x-=arr[1]*100;
    arr[2]=x/10;
    x-=arr[2]*10;
    arr[3]=x/1;
    return;
}

int main()
{
    int sample[4],temp,B_arr[10];//sample:���T����  B_arr:����0~9�����|�ӼƦr���Asample�̭�
    cin>>temp;
    //printf("%d\n",temp_sample);
    separate(temp,sample);//�N���T���צs�n
    //print_arr(sample);
    for(int i=0;i<10;i++)
    {
        B_arr[i]=0;//��l��
    }
    for(int i=0;i<4;i++)
    {
        B_arr[sample[i]]=1;//sample�����X�ӼƦr��1
    }
    while(1)
    {
        int A=0,B=0,compare[4];
        cin>>temp;
        if(temp==0)//0000�N��
        {
            break;
        }
        separate(temp,compare);//�N�n�񪺼Ʀr�s�icompare�}�C
        //print_arr(compare);

        for(int i=0;i<4;i++)
        {
            if(sample[i]==compare[i])//�̧Ǥ��|�ӼƦr �@�˴N+�@��A
            {
                A++;
            }
            if(B_arr[compare[i]])//��compare���|�ӼƦr���S����sample���Ʀr���� ���NB++
            {
                B++;
            }
        }
        B-=A;//�]��B�|���ƺ�A������ �G�
        print_ans(A,B);
    }
    return 0;
}
