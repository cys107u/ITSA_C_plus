#include<iostream>
#include<stdlib.h>
using namespace std;

int compare(const void *a, const void *b)//qsort需要的compare函式
{
    int c = *(int *)a;
    int d = *(int *)b;
    if(c < d)
    {
        return -1; //回傳-1表示a<b
    }
    else if (c == d)
    {
        return 0;//回傳0表示a=b
    }
    else
        return 1;//回傳1表示a>b
}

int main()
{
    int N;
    cin>>N;//輸入幾筆測資
    while(N)//剩餘測資數!=0之前
    {
        int T,m,k;//T:總預算  m:員工數  k:獎品數
        cin>>T>>m>>k;//輸入
        int item[k];
        for(int i=0; i<k; i++)
        {
            cin>>item[i];//輸入各獎品金額
        }

        qsort(item,k,sizeof(int),compare);//對獎品金額做排序
        int temp=0;
        for(int i=0; i<m; i++)//greedy:越便宜的獎品越先買，員工有幾位就買前幾便宜的
        {
            temp+=item[i];
        }
        if(temp<=T)//看買的東西有沒有超過總預算，沒有超過就輸出
        {
            cout<<temp<<endl;
        }
        else//反之
        {
            cout<<"Impossible\n";
        }
        N--;//測資數--
    }
    return 0;
}
