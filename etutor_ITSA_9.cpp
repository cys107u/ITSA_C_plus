#include<iostream>

using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        int ans=0;
        for(int i=0;i<=num;i+=3)//�q0�}�l�A�C���[3�A�[�줣�W�Lnum
        {
            ans+=i;//��Ʀr�[�i�h
        }
        cout<<ans<<"\n";
    }
    return 0;
}
