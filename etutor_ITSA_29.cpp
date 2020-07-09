#include<iostream>
#include<stdlib.h>
using namespace std;

int id_num(char ch)//建表 得到哪個英文會拿到哪個數字
{
    switch(ch)
    {
        case 'A': return 10 ;break;   case 'P': return 23; break;
        case 'B': return 11 ;break;   case 'Q': return 24; break;
        case 'C': return 12 ;break;   case 'R': return 25; break;
        case 'D': return 13 ;break;   case 'S': return 26; break;
        case 'E': return 14 ;break;   case 'T': return 27; break;
        case 'F': return 15 ;break;   case 'U': return 28; break;
        case 'G': return 16 ;break;   case 'V': return 29; break;
        case 'H': return 17 ;break;   case 'W': return 32; break;
        case 'I': return 34 ;break;   case 'X': return 30; break;
        case 'J': return 18 ;break;   case 'Y': return 31; break;
        case 'K': return 19 ;break;   case 'Z': return 33; break;
        case 'L': return 20 ;break;
        case 'M': return 21 ;break;
        case 'N': return 22 ;break;
        case 'O': return 35 ;break;
    }
}
int main()
{
    //int idnum[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    char id[11];
    id[10]='\0';
    int i=0,tmp,total=0;
    for(i=0;i<10;i++)
    {
        cin>>id[i];//輸入
    }
    tmp=id_num(id[0]);//取英文對應的數字
    total=(tmp%10)*9+tmp/10+(id[1]-'0')*8+(id[2]-'0')*7+(id[3]-'0')*6+(id[4]-'0')*5+(id[5]-'0')*4+(id[6]-'0')*3+(id[7]-'0')*2+(id[8]-'0')*1;//計算P(公式)
    if((10-total%10) ==(id[9]-'0'))//符合
    {
       cout<<"CORRECT!!!\n";
    }
    else
    {
        cout<<"WRONG!!!\n";
    }
    return 0;
}
