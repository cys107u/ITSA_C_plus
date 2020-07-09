#include<iostream>

using namespace std;
void print_arr(int arr[4])//debug用
{
    for(int i=0;i<4;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}
void print_ans(int A,int B)//輸出幾A和幾B
{
    cout<<A<<"A"<<B<<"B"<<"\n";
}
void separate(int x,int arr[4])//把每個位數分開存進arr[0~3]
{
    arr[0]=x/1000;//先把最大的存進陣列
    x-=arr[0]*1000;//再把原本的數字剪掉存好的部分
    arr[1]=x/100;
    x-=arr[1]*100;
    arr[2]=x/10;
    x-=arr[2]*10;
    arr[3]=x/1;
    return;
}

int main()
{
    int sample[4],temp,B_arr[10];//sample:正確答案  B_arr:紀錄0~9有哪四個數字有再sample裡面
    cin>>temp;
    //printf("%d\n",temp_sample);
    separate(temp,sample);//將正確答案存好
    //print_arr(sample);
    for(int i=0;i<10;i++)
    {
        B_arr[i]=0;//初始化
    }
    for(int i=0;i<4;i++)
    {
        B_arr[sample[i]]=1;//sample的那幾個數字變1
    }
    while(1)
    {
        int A=0,B=0,compare[4];
        cin>>temp;
        if(temp==0)//0000就停
        {
            break;
        }
        separate(temp,compare);//將要比的數字存進compare陣列
        //print_arr(compare);

        for(int i=0;i<4;i++)
        {
            if(sample[i]==compare[i])//依序比對四個數字 一樣就+一個A
            {
                A++;
            }
            if(B_arr[compare[i]])//看compare的四個數字有沒有跟sample的數字重複 有就B++
            {
                B++;
            }
        }
        B-=A;//因為B會重複算A的部分 故減掉
        print_ans(A,B);
    }
    return 0;
}
