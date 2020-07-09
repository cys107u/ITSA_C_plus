#include<iostream>

using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        int ans=0;
        for(int i=0;i<=num;i+=3)//從0開始，每次加3，加到不超過num
        {
            ans+=i;//把數字加進去
        }
        cout<<ans<<"\n";
    }
    return 0;
}
