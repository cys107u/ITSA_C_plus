#include<iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;

int no_repeat(char ans[][1000],char word[],int total)//�ˬdword���S����ans����
{
    for(int i=0; i<total; i++)
    {
        if(strcmp(ans[i],word)==0)//���Ʀ^��0
        {
            return 0;
        }
    }
    return 1;//�����䧹�S�����Ʀ^��1
}

void be_lower_case(char word[],int length)//�N�j�g��p�g
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
        int length_tmp=strlen(temp_word);//���r������
        be_lower_case(temp_word,length_tmp);//������ �p�g
        if(no_repeat(ans,temp_word,i))//�ˬd���ơA���ƴN���[�i����
        {
            strcpy(ans[i],temp_word);//�S������ ��i����
            i++;
        }
    }
    for(int j=0; j<i; j++)//�N�s�ians�̪��r�̧ǿ�X
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
