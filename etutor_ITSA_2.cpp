#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int mi=0;
    double km=0;
    while(cin>>mi)//在遇到結尾字元前不斷做
    {
        km=mi*(1.6);//轉換
        cout<<fixed<<setprecision(1)<<  km<<"\n";//輸出
    }
    return 0;
}
