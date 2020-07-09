#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char A[8192],B[8192];
    cin>>A>>B;
    int length_A=strlen(A);//取A的長度
    int length_B=strlen(B);//取B的長度
    int ans=0;
    //printf("%d:%s\n%d:%s\n",length_A,A,length_B,B);
    for(int now_B=0; now_B<length_B; now_B++)//從字串B的第一個字開始搜
    {
        if(now_B+length_A>length_B)//如果B剩下的比A還少
        {
            break;
        }
        //printf("!");
        int flag=0;//用flag紀錄有幾個相同
        for(int now_A=0; now_A<length_A; now_A++)
        {
            if(A[now_A]==B[now_B+now_A])
            {
                flag++;//現在到的A跟B如果一樣flag就+
            }
        }
        if(flag==length_A)//flag跟A的長度一樣，表示從B的這個字開始會跟A一樣
        {
            ans++;
        }
        //printf("nowB:%d,f:%d\n",now_B,flag);
    }
    cout<<ans<<"\n";
    return 0;
}
