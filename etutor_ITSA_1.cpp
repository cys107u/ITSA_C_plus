#include<iostream>
#include<string.h>
void become_star(char ans[][24],int level,int start,int end)//ans[level][start to end] 變成 *
{
    for(int i=start; i<=end; i++)
    {
        ans[level][i]='*';
    }
}

using namespace std;

int main()
{
    int num[4],start=0,end=4,temp;
    char ans[5][24];
    char space[24]="                       ";
    //num[0]=ans[0 to 4][0 to 4], num[1]=ans[0 to 4][6 to 10], num[2]=ans[0 to 4][12 to 16], num[3]=ans[0 to 4][18 to 22]
    for(int i=0; i<5; i++)
    {
        strcpy(ans[i],space);//初始化
    }
    cin>>temp;//輸入的是一個四位數
    num[0]=temp/1000;
    temp%=1000;
    num[1]=temp/100;
    temp%=100;
    num[2]=temp/10;
    temp%=10;
    num[3]=temp;//將他們分別存進num[0~4]
    //printf("%d %d %d %d\n",num[0],num[1],num[2],num[3]);

    // 01234指的是數字的第幾層，round則是第幾個數字
    for(int round=0; round<4; round++,start+=6,end+=6) // 做完第一個數字後 開始跟結束都會+6，變成新的一個數字格，見宣告char下面那行註解
    {
        //------------------0-----------------------
        //第0層：除了1是"    *"，4是"*   *"，其他都是"*****"
        int level=0;;
        if(num[round]==1||num[round]==4)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
        if(num[round]==4)
        {
            become_star(ans,level,start,start);
        }
        //------------------1-----------------------
        //第1層：56是"*    "，1237是"    *"，其他是"*   *"
        level++;
        if((num[round]<5)||(num[round]>6))
        {
            become_star(ans,level,end,end);
        }
        if(num[round]<1||((num[round]>3)&&(num[round]!=7)))
        {
            become_star(ans,level,start,start);
        }
        //------------------2-----------------------
        //第2層：0是"*   *"，17是"    *"，其他是"*****"
        level++;
        if(num[round]<2||num[round]==7)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
        if(num[round]==0)
        {
            become_star(ans,level,start,start);
        }
        //------------------3-----------------------
        //第3層：2是"*    "，68是"*   *"，其他是"    *"，
        level++;
        if(num[round]!=2)
        {
            become_star(ans,level,end,end);
        }
        if(num[round]%2==0&&num[round]!=4)
        {
            become_star(ans,level,start,start);
        }
        //------------------4-----------------------
        //第4層：147是"    *"，其他是"*****"
        level++;
        if(num[round]%3==1||num[round]==9)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
    }
    for(int i=0; i<5; i++) // 逐行印出字串
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}
