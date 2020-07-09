#include<iostream>
using namespace std;

int main()
{
    int hour_1,hour_2,min_1,min_2;
    int time_1,time_2,time,cost=0;
    cin>>hour_1>>min_1>>hour_2>>min_2;//輸入
        time_1=hour_1*60+min_1;//轉換為 小時*60 + 分鐘
        time_2=hour_2*60+min_2;
        time=time_2-time_1; //算共停了幾分鐘
        if(time<0)//如果是負的表示跨天
        {
            time+=(24*60);//+24小時
        }
        time/=30;//將時間轉為幾個半小時
        if(time>0)
        {
            if(time<=4)//兩小時內
            {
                cost+=time*30;//半小時30元
            }
            else
            {
                time-=4;
                cost+=120;//扣掉前兩小時的部分
                if(time<=4)//扣完後在兩小時內(四小時內)
                {
                    cost+=time*40;//半小時0元
                }
                else////扣完後在兩小時之上
                {
                    time-=4;
                    cost+=160;//再扣掉兩小時～四小時的部分
                    if(time>0)
                    {
                        cost+=60*time;//半小時60元
                    }
                }
            }
        }
        cout<<cost<<"\n";
    return 0;
}
