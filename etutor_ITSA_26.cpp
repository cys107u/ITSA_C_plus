#include<iostream>
using namespace std;
int sum_of_number(int x)//�p��@�ӼƦr�U��ƪ��`�M
{
    int y=0;
    int k=10000000,m;
    while(1)
    {
        //�Q��%k�ӹL�ok�H�W���Ҧ���� �Q��/m��k��m�����ߤ@�����Ӽ�
        m=k/10;
        int tmp=(x%k);
        y+=tmp/m;//�A�[�iy
        k/=10;
        if(k==1)//k==1�N��ܨ쩳�F
        {
            break;
        }
    }
    return y;

}


int main()
{
    int N;
    cin>>N;
    int number[N],sum[N];
    for(int now_num=0;now_num<N;now_num++)//��J
    {
        cin>>number[now_num];
        sum[now_num]=sum_of_number(number[now_num]);//��J���P�ɭp��U����`�M
        //printf("%d ",sum[now_num]);
    }

    for(int i=N-1;i>=0;i--)//���̷ӼƦr�����j�p���Ƨ�
    {
        for(int j=0;j<i;j++)
        {
            if(number[j]>number[j+1])
            {
                swap(number[j],number[j+1]);
                swap(sum[j],sum[j+1]);
            }
        }
    }
    for(int i=N-1;i>=0;i--)//�A�̷ӦU����`�M���Ƨ�
    {
        for(int j=0;j<i;j++)
        {
            if(sum[j]>sum[j+1])
            {
                swap(number[j],number[j+1]);
                swap(sum[j],sum[j+1]);
            }
        }
    }
    for(int i=0;i<N;i++)//��X
    {
        if(i!=0)
            cout<<" ";
        cout<<number[i];
    }
    cout<<"\n";
    return 0;
}
