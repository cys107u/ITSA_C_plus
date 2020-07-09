#include<iostream>
#include<math.h>

using namespace std;

void inverse(int ans[])//舉例： 2的00000010 轉 -2的11111110
{
    for(int i=0;i<8;i++)//先全部0轉1，1轉0
    {
        ans[i]=(ans[i]+1)%2;
    }
    for(int j=7;j>=0;j--)//從最後開始看
    {
        if(ans[j]==0)//前面保持不變直到遇到0
        {
            ans[j]=1;//本身變1
            for(int k=j+1;k<8;k++)
            {
                 ans[k]=0;//後面改0
            }
            break;
        }
    }
}
int my_pow(int x,int y)//算x的y次方
{
    int ans=1;
    for(int i=0;i<y;i++)
    {
        ans*=x;
    }
    return ans;
}

int main()
{
    int num, ans[8], mod, ans_now,inverse_flag;
    while(cin>>num)//遇到結尾字元前一直做
    {
        inverse_flag=0;
        if(num==0)//特例一：0
        {
            cout<<"00000000\n";
            continue;
        }
        else if(num==-128)//特例二：-128
        {
            cout<<"10000000\n";
            continue;
        }
        if(num<0)//如果是負的，先轉正的，最後再inverse
        {
            num*=-1;
            inverse_flag=1;
        }
        ans[0]=0;//因為都是正數，最大為127是01111111，最前面恆為0
        for( int level=1;level<=7;level++)
        {
            ans_now=8-level; //從最後面往前算
            int x=my_pow(2,level);//算出2的level次方(1～6)
            //printf("%d\n",x);
            mod=(num%x);//算餘數
            if(mod==0)//餘數為零
            {
                ans[ans_now]=0;//填0
            }
            else//餘數不為零
            {
                ans[ans_now]=1;//填1
                num-=mod;//扣掉餘數
            }
        }
        if(inverse_flag)//如果一開始偵測到是負數
        {
            inverse(ans);//轉回負數表示法
        }
        for(int i=0;i<8;i++)//輸出
        {
            cout<<ans[i];
        }
        cout<<"\n";
    }
    return 0;
}
