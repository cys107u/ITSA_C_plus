#include<iostream>

using namespace std;

int is_prime(int x)
{
    for(int i=2; i*i<=x; i++)//�q�G����x���}�ڸ�����
    {
        if(i*i==x)//�����]��
        {
            return 1;
        }
        for(int j=1; i*j<=x; j++)
        {
            if(x==j*i)//�����]��
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int num;
    while(cin>>num)
    {
        if(is_prime(num))//1
        {
            cout<<"NO\n";
            continue;
        }
        // 0
        cout<<"YES\n";
    }
    return 0;
}
