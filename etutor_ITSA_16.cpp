#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char A[8192],B[8192];
    cin>>A>>B;
    int length_A=strlen(A);//��A������
    int length_B=strlen(B);//��B������
    int ans=0;
    //printf("%d:%s\n%d:%s\n",length_A,A,length_B,B);
    for(int now_B=0; now_B<length_B; now_B++)//�q�r��B���Ĥ@�Ӧr�}�l�j
    {
        if(now_B+length_A>length_B)//�p�GB�ѤU����A�٤�
        {
            break;
        }
        //printf("!");
        int flag=0;//��flag�������X�ӬۦP
        for(int now_A=0; now_A<length_A; now_A++)
        {
            if(A[now_A]==B[now_B+now_A])
            {
                flag++;//�{�b�쪺A��B�p�G�@��flag�N+
            }
        }
        if(flag==length_A)//flag��A�����פ@�ˡA��ܱqB���o�Ӧr�}�l�|��A�@��
        {
            ans++;
        }
        //printf("nowB:%d,f:%d\n",now_B,flag);
    }
    cout<<ans<<"\n";
    return 0;
}
