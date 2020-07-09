#include<iostream>
using namespace std;
void print_arr(int b,int n,int arr[])//debug用
{
    for(int i=b;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}

void swap(int *a,int *b)//交換兩個變數的值
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void car_time_update(int s, int d, int time[25])//更新工作時間 將開始到返回的那段時間改為1表示有工作
{
    for(int i=s;i<d;i++)
    {
        time[i]=1;
    }
}
int which_car(int s,int d,int total_car,int car_work_time[31][25])//判斷要選哪台車做這個s~d的工作
{
    int can_work[total_car+1];//宣告can_work陣列來存每台車的可工作狀態
    for(int i=1;i<=total_car;i++)
    {
        can_work[i]=1;//先將每台車視為可工作
    }
    for(int i=1;i<=total_car;i++)//對每台車判斷
    {
        for(int j=s;j<d;j++)//從開始到返回時間
        {
            if(car_work_time[i][j]==1)//假設在這段時間那台車已經有工作
            {
                can_work[i]=0;//將那台車改為不能工作
            }
        }
    }
    for(int i=1;i<=total_car;i++)//從第1到最後依序尋找每台車
    {
        if(can_work[i])//如果有可以工作的 非0
        {
            return i;//派它
        }
    }
    return 0;//都不能就回傳0
}



int main()
{
    int n, total_car=1;
    cin>>n;
    int s[n],d[n],car_work_time[31][25];// s:出發時間 d:返回時間 car_work_time[某台車][0~24小時]:有工作是1 沒工作是0
    for(int i=0; i<n; i++)
    {
        cin>>s[i]>>d[i];//輸入
    }
    for(int i=0;i<31;i++)
    {
        for(int j=0;j<25;j++)
        {
            car_work_time[i][j]=0;
        }
    }

    for(int i=n-1; i>=0; i--)//依開始時間先到後做排序
    {
        for(int j=0; j<i; j++)
        {
            if(s[j]>s[j+1])
            {
                swap(&s[j],&s[j+1]);
                swap(&d[j],&d[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {

        int choose_car=which_car(s[i],d[i],total_car,car_work_time);//選擇哪台車
                        //printf("%d\n",choose_car);
        if(choose_car>0)//如果不是0表示目前有某台車可以工作
        {
            car_time_update(s[i],d[i],car_work_time[choose_car]);//更新那台車的工作時間
        }
        else//是0就表示都不能工作->加新的車子
        {
            total_car++;
            choose_car=total_car;
            car_time_update(s[i],d[i],car_work_time[choose_car]);//更新新車子的工作時間
        }
        //printf("%d:\n",choose_car);
        //print_arr(1,25,car_work_time[choose_car]);
    }
    cout<<total_car<<"\n";
    return 0;
}
