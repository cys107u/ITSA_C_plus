#include<iostream>
#include<math.h>

using namespace std;

void inverse(int ans[])//�|�ҡG 2��00000010 �� -2��11111110
{
    for(int i=0;i<8;i++)//������0��1�A1��0
    {
        ans[i]=(ans[i]+1)%2;
    }
    for(int j=7;j>=0;j--)//�q�̫�}�l��
    {
        if(ans[j]==0)//�e���O�����ܪ���J��0
        {
            ans[j]=1;//������1
            for(int k=j+1;k<8;k++)
            {
                 ans[k]=0;//�᭱��0
            }
            break;
        }
    }
}
int my_pow(int x,int y)//��x��y����
{
    int ans=1;
    for(int i=0;i<y;i++)
    {
        ans*=x;
    }
    return ans;
}

int main()
{
    int num, ans[8], mod, ans_now,inverse_flag;
    while(cin>>num)//�J�쵲���r���e�@����
    {
        inverse_flag=0;
        if(num==0)//�S�Ҥ@�G0
        {
            cout<<"00000000\n";
            continue;
        }
        else if(num==-128)//�S�ҤG�G-128
        {
            cout<<"10000000\n";
            continue;
        }
        if(num<0)//�p�G�O�t���A���ॿ���A�̫�Ainverse
        {
            num*=-1;
            inverse_flag=1;
        }
        ans[0]=0;//�]�����O���ơA�̤j��127�O01111111�A�̫e����0
        for( int level=1;level<=7;level++)
        {
            ans_now=8-level; //�q�̫᭱���e��
            int x=my_pow(2,level);//��X2��level����(1��6)
            //printf("%d\n",x);
            mod=(num%x);//��l��
            if(mod==0)//�l�Ƭ��s
            {
                ans[ans_now]=0;//��0
            }
            else//�l�Ƥ����s
            {
                ans[ans_now]=1;//��1
                num-=mod;//�����l��
            }
        }
        if(inverse_flag)//�p�G�@�}�l������O�t��
        {
            inverse(ans);//��^�t�ƪ�ܪk
        }
        for(int i=0;i<8;i++)//��X
        {
            cout<<ans[i];
        }
        cout<<"\n";
    }
    return 0;
}
