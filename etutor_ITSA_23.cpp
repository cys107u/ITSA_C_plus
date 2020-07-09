#include<iostream>
using namespace std;

int main()
{
    int N,total,remain;//N: 小明有多少錢  total:總共要付多少錢  remain:找的總額
    int a[3],coin[3];
    char d;
    cin>>N>>d>>a[0]>>d>>a[1]>>d>>a[2];
    total=(a[0]*15)+(a[1]*20)+(a[2]*30);
    if(total>N)//總共付的錢比小明有的多
    {
        cout<<"0\n";
    }
    else if(total==N)//總共付的錢剛好是小明有的
    {
        cout<<"0,0,0\n";
    }
    else
    {
        //這邊使用greedy 越大的面額拿越多越好
        remain=N-total;

        coin[0]=remain/50;
        remain%=50;

        coin[1]=remain/5;
        remain%=5;

        coin[2]=remain/1;
        cout<<coin[2]<<","<<coin[1]<<","<<coin[0]<<"\n";
    }

    return 0;
}
