#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int h,g;//h:身高  g:性別
    double w;//體重
    while(cin>>h>>g)//輸入
    {
        if(g==1)//男生
        {
            w= (h-80)*0.7;//公式
        }
        else if(g==2)//女生
        {
            w= (h-70)*0.6;//公式
        }
        cout<<fixed<<setprecision(1)<<w<<endl;//輸出到小數第一位
    }
    return 0;
}
