#include<iostream>
using namespace std;

void print_ans(int arr[],int total)//�N�}�C���C�@�ӭȦL�X
{
    for(int i=0;i<total;i++)
    {
        if(i!=0)//�Ĥ@�Ӥ��Υ[�Ů�
            cout<<" ";
        cout<<arr[i];
    }
    cout<<"\n";
}
void separate(int x,int arr[],int total)//�Nx���U��Ʀr���}�s�iarr�}�C��
{
    int k=1;
    for(int i=0;i<total-1;i++)//���̷Ӱ}�C�`�Ƴ]�wk�@�}�l���j�p
    {
        k*=10;
    }
    for(int i=0;i<total;i++)
    {
        arr[i]=x/k;//�Nx�ثe�̤j���Ʀs�i�}�C
        if(i!=total-1)//�p�G���O�}�C���̫�@��(k!=1)
        {
            x-=arr[i]*k;//x��s�n������
            k/=10;//k�p�@�Ӧ��
        }
    }
    return ;
}
void initialize_arr(int arr[],int total,int x)//�N�}�C���C�ӭȳ]��x �Ω��l��
{
    for(int i=0;i<total;i++)
        {
            arr[i]=x;
        }
}

int main()
{
    int special_price[8],other_price[3][8],temp,get_price[7],total_money=0;
    //special_price[8]:�S��  other_price[3][8]:�t�~�T�Ӽ�  get_price[7]:�U�Ӽ����O���F�X��  total_money:�`����
    initialize_arr(get_price,7,0);//��l��
    cin>>temp;
    separate(temp,special_price,8);//�N�S���C�ӼƦr�s�n
    for(int i=0;i<3;i++)
    {
        cin>>temp;
        separate(temp,other_price[i],8);//�N�䥦���C�ӼƦr�s�n
    }
    int round;
    cin>>round;
    for(int r=0;r<round;r++)//�̷Ӧ��X�i�o�����X��
    {
        int min_j=5, temp_price=0;
        int my_receipt[8];
        cin>>temp;
        separate(temp,my_receipt,8);//�N�o����J���o�����C�ӮѦr���}�s�imy_receipt�}�C
        for(int i=0;i<8;i++)//�ˬd���S�����S��
        {
            if(my_receipt[i]!=special_price[i])//���@�Ӥ���N���X
            {
                break;
            }
            if(i==7)//�j��̫��٨S�����X��ܤ���
            {
                get_price[0]++;//�S����++
                temp_price=2000000;//�o200�U
            }
        }
        if(temp_price==2000000)//�p�G�����ʸU �o�i�o���N���ΦA���L����F
        {
            total_money+=temp_price;
            continue;//���U�@�i�o��
        }
        for(int i=0;i<3;i++)//��L�����T�ӬG���T��
        {
            int j=0;
            for(j=7;j>=0;j--)//�q�̫᭱�}�l ��j��ɰ��U�N���D�o���M�o�Ӽ����j+1�ӼƦr�ۦP
            {
                if(my_receipt[j]!=other_price[i][j])
                {
                    break;
                }
            }
            //printf("\n!%d:%d!\n",r,j);
            if(j>=min_j)//min_j�O�ΨӰO����T�Ӽ��ɳ̤j�����Ӽ��A�]j�V�p��ܭ��ƪ��Ʀr�V�h�A��l�Ȭ�5��ܨS����
            {
                continue;
            }
            min_j=j;//��smin_j
            if(j<0)//�Y��
            {
                temp_price=200000;
            }
            else if(j==0)//�G��
            {
                temp_price=40000;
            }
            else if(j==1)//�T��
            {
                temp_price=10000;
            }
            else if(j==2)//�|��
            {
                temp_price=4000;
            }
            else if(j==3)//����
            {
                temp_price=1000;
            }
            else if(j==4)//����
            {
                temp_price=200;
            }
        }
        total_money+=temp_price;//�T�Ӽ�����L��N������i�`����
        get_price[min_j+2]++;//����������Ӽ�
        //printf("total:%d\n",total_money);
    }
    print_ans(get_price,7);//��X
    cout<<total_money<<"\n";
    return 0;
}
