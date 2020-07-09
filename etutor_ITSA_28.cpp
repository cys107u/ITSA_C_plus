#include<iostream>
using namespace std;

void print_ans(int arr[],int total)//將陣列的每一個值印出
{
    for(int i=0;i<total;i++)
    {
        if(i!=0)//第一個不用加空格
            cout<<" ";
        cout<<arr[i];
    }
    cout<<"\n";
}
void separate(int x,int arr[],int total)//將x的各位數字分開存進arr陣列中
{
    int k=1;
    for(int i=0;i<total-1;i++)//先依照陣列總數設定k一開始的大小
    {
        k*=10;
    }
    for(int i=0;i<total;i++)
    {
        arr[i]=x/k;//將x目前最大的數存進陣列
        if(i!=total-1)//如果不是陣列的最後一個(k!=1)
        {
            x-=arr[i]*k;//x減掉存好的部分
            k/=10;//k小一個位數
        }
    }
    return ;
}
void initialize_arr(int arr[],int total,int x)//將陣列的每個值設為x 用於初始化
{
    for(int i=0;i<total;i++)
        {
            arr[i]=x;
        }
}

int main()
{
    int special_price[8],other_price[3][8],temp,get_price[7],total_money=0;
    //special_price[8]:特獎  other_price[3][8]:另外三個獎  get_price[7]:各個獎分別拿了幾個  total_money:總獎金
    initialize_arr(get_price,7,0);//初始化
    cin>>temp;
    separate(temp,special_price,8);//將特獎每個數字存好
    for(int i=0;i<3;i++)
    {
        cin>>temp;
        separate(temp,other_price[i],8);//將其它獎每個數字存好
    }
    int round;
    cin>>round;
    for(int r=0;r<round;r++)//依照有幾張發票做幾次
    {
        int min_j=5, temp_price=0;
        int my_receipt[8];
        cin>>temp;
        separate(temp,my_receipt,8);//將這次輸入的發票的每個書字分開存進my_receipt陣列
        for(int i=0;i<8;i++)//檢查有沒有中特獎
        {
            if(my_receipt[i]!=special_price[i])//有一個不對就跳出
            {
                break;
            }
            if(i==7)//搜到最後還沒有跳出表示中獎
            {
                get_price[0]++;//特獎欄++
                temp_price=2000000;//得200萬
            }
        }
        if(temp_price==2000000)//如果拿到兩百萬 這張發票就不用再跟其他獎對了
        {
            total_money+=temp_price;
            continue;//換下一張發票
        }
        for(int i=0;i<3;i++)//其他獎有三個故做三次
        {
            int j=0;
            for(j=7;j>=0;j--)//從最後面開始 看j何時停下就知道發票和這個獎到第j+1個數字相同
            {
                if(my_receipt[j]!=other_price[i][j])
                {
                    break;
                }
            }
            //printf("\n!%d:%d!\n",r,j);
            if(j>=min_j)//min_j是用來記錄對三個獎時最大的那個獎，因j越小表示重複的數字越多，初始值為5表示沒中獎
            {
                continue;
            }
            min_j=j;//更新min_j
            if(j<0)//頭獎
            {
                temp_price=200000;
            }
            else if(j==0)//二獎
            {
                temp_price=40000;
            }
            else if(j==1)//三獎
            {
                temp_price=10000;
            }
            else if(j==2)//四獎
            {
                temp_price=4000;
            }
            else if(j==3)//五獎
            {
                temp_price=1000;
            }
            else if(j==4)//六獎
            {
                temp_price=200;
            }
        }
        total_money+=temp_price;//三個獎都對過後將獎金放進總獎金
        get_price[min_j+2]++;//紀錄拿到哪個獎
        //printf("total:%d\n",total_money);
    }
    print_ans(get_price,7);//輸出
    cout<<total_money<<"\n";
    return 0;
}
