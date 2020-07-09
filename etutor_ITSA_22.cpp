#include<iostream>
using namespace std;
int is_tie(int grath[3][3])//平手輸出1 有勝負輸出0
{
    int flag=0;
    for(int row=0;row<3;row++)//判斷每條橫線有沒有三個1或三個0
    {
        flag=0;
        for(int col=0;col<3;col++)
        {
            flag+=grath[row][col];
        }
        if(flag==0||flag==3)
        {
            return 0;
        }
    }
    for(int col=0;col<3;col++)//判斷每條直線有沒有三個1或三個0
    {
        flag=0;
        for(int row=0;row<3;row++)
        {
            flag+=grath[row][col];
        }
        if(flag==0||flag==3)
        {
            return 0;
        }
    }
            flag=0;
    for(int i=0;i<3;i++)//判斷左上到右下有沒有三個1或三個0
    {
            flag+=grath[i][i];
    }
    if(flag==0||flag==3)
        {
            return 0;
        }
                flag=0;
    for(int i=0;i<3;i++)//判斷右上到左下有沒有三個1或三個0
    {

        flag+=grath[i][2-i];
    }
    if(flag==0||flag==3)
        {
            return 0;
        }
        return 1;//全部連成一條線的情況都不成立，平手
}

int main()
{
    int grath[3][3];
    for(int row=0;row<3;row++)//輸入
    {
        for(int col=0;col<3;col++)
        {
            cin>>grath[row][col];
        }
    }
    if(is_tie(grath))//1表示平手
    {
        cout<<"False\n";
    }
    else//0表示有勝負
    {
        cout<<"True\n";
    }
    return 0;
}
