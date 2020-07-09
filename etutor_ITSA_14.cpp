#include<iostream>
#include<string.h>

using namespace std;

int is_Palindrome(char word[],int length)//判斷迴文 是回傳1 不是回傳0
{
    for(int i=0;i<(length)/2;i++)//從第一個到中間那個
    {
        if((word[i])!=word[length-i-1])//前面第i個跟倒數第i個不一樣->不是回文
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    char word[8192];
    while(cin>>word)
    {
        int length = strlen(word);//字的總長
       //printf("%s L:%d, is_P:%d\n",word,length,is_Palindrome(word,length));

        if(is_Palindrome(word,length)==0)//不是回文會回傳0
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";

    }
    return 0;
}
