#include<iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;

int no_repeat(char ans[][1000],char word[],int total)//檢查word有沒有跟ans重複
{
    for(int i=0; i<total; i++)
    {
        if(strcmp(ans[i],word)==0)//重複回傳0
        {
            return 0;
        }
    }
    return 1;//全部找完沒有重複回傳1
}

void be_lower_case(char word[],int length)//將大寫轉小寫
{
    for(int i=0; i<length; i++)
    {
        if(word[i]>=65&&word[i]<=90)
        {
            word[i]=word[i]+32;
        }
    }
}
int main()
{
    char temp_word[1000], ans[1000][1000];
    int i=0;
    while(cin>>temp_word)
    {
        int length_tmp=strlen(temp_word);//取字的長度
        be_lower_case(temp_word,length_tmp);//全部轉 小寫
        if(no_repeat(ans,temp_word,i))//檢查重複，重複就不加進答案
        {
            strcpy(ans[i],temp_word);//沒有重複 放進答案
            i++;
        }
    }
    for(int j=0; j<i; j++)//將存進ans裡的字依序輸出
    {
        if(j!=0)
        {
            cout<<" ";
        }
        cout<<ans[j];
    }
    cout<<"\n";
    return 0;
}
