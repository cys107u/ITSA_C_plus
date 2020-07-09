#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float t_min=1e9;//初始化:很大的最小值
    float t_max=-1e8;//初始化:很小的最大值
    float tmp;
    for(int i=0;i<10;i++)
    {
        cin>>tmp;//每輸入一個
        t_max=max(t_max,tmp); //輸入和目前最大值取較大
        t_min=min(t_min,tmp); //輸入和目前最小值取較小
    }
    cout <<"maximum:"<< fixed  <<  setprecision(2) << t_max << "\nminimum:" << t_min <<  endl;
    return 0;
}
