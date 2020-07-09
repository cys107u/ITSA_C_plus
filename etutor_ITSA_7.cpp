#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int total,x_R,x_I,y_R,y_I,ans_R=99,ans_I=99;
    cin>>total;//輸入測資數
    for(int round=0;round<total;round++)//幾個測資跑幾輪
    {
        char compute[2];
        cin>>compute;//輸入運算符號
        cin>>x_R>>x_I>>y_R>>y_I;//輸入xy的實數和虛數
        if(strcmp(compute,"+")==0)//+
        {
            ans_R=x_R+y_R;
            ans_I=x_I+y_I;
        }
        else if(strcmp(compute,"-")==0)//-
        {
            ans_R=x_R-y_R;
            ans_I=x_I-y_I;
        }
        else if(strcmp(compute,"*")==0)//*
        {
            ans_R=(x_R*y_R)-(x_I*y_I);//實數相乘-虛數相乘
            ans_I=(x_R*y_I)+(x_I*y_R);//實數虛數互乘相加
        }
        cout<<ans_R<<" "<<ans_I<<"\n";
    }
    return 0;
}
