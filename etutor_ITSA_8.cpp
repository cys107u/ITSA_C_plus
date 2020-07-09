#include<iostream>

using namespace std;

int is_prime(int x)
{
    for(int i=2; i*i<=x; i++)//從二做到x的開根號附近
    {
        if(i*i==x)//有找到因數
        {
            return 1;
        }
        for(int j=1; i*j<=x; j++)
        {
            if(x==j*i)//有找到因數
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
