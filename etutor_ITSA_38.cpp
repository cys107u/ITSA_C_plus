#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int kWh_stand[5]= {0,120,330,500,700};//會改變費用的度數
    double summer[5]= {2.10, 3.02, 4.39, 4.97, 5.63 };//夏月費用
    double non_summer[5]= {2.10, 2.68, 3.61, 4.01, 4.50 };//非夏月費用
    int kWh,temp;//kWh:度數
    double summer_total=0,non_summer_total=0;
    cin>>kWh;
    for(int i=4;kWh>0;i--)//在度數歸零前
    {
        if(kWh>kWh_stand[i])//如果大於收費標準的度數
        {
            temp=kWh-kWh_stand[i];//算超過多少
            summer_total+=temp*summer[i];//加進夏月費用
            non_summer_total+=temp*non_summer[i];//加進非夏月費用
            kWh-=temp;//扣除算過的部分
        }
    }
    cout<<"Summer months:"<<fixed<<setprecision(2)<<summer_total<<endl;//輸出夏月
    cout<<"Non-Summer months:"<<fixed<<setprecision(2)<<non_summer_total<<endl;//輸出非夏月

return 0;
}
