#include<iostream>
using namespace std;

int gcd(int x,int y)//輾轉相除找最大公因數
{
    if((x%y)==0)//如果x被y整除
    {
        return y;//y為最大公因數
    }
    x=x%y;//否則，x轉為除y的餘數
    return gcd(y,x);//遞迴
}
int main()
{
    int x,y,ans;
    cin>>x>>y;

    ans=gcd(x,y);
    cout<<ans<<"\n";
    return 0;
}
