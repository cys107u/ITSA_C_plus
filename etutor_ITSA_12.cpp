#include<iostream>
using namespace std;

int function(int x)//遞迴副函式
{
    if(x==0||x==1)//1輸出2，0輸出1
    {
        return x+1;
    }
    else
        return function(x-1)+function(x/2); //不然就依題目給的式子遞迴找答案
}

int main()
{
    int x;
    cin>>x;
    cout<<function(x)<<"\n";
    return 0;
}
