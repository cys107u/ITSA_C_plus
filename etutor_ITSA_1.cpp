#include<iostream>
#include<string.h>
void become_star(char ans[][24],int level,int start,int end)//ans[level][start to end] �ܦ� *
{
    for(int i=start; i<=end; i++)
    {
        ans[level][i]='*';
    }
}

using namespace std;

int main()
{
    int num[4],start=0,end=4,temp;
    char ans[5][24];
    char space[24]="                       ";
    //num[0]=ans[0 to 4][0 to 4], num[1]=ans[0 to 4][6 to 10], num[2]=ans[0 to 4][12 to 16], num[3]=ans[0 to 4][18 to 22]
    for(int i=0; i<5; i++)
    {
        strcpy(ans[i],space);//��l��
    }
    cin>>temp;//��J���O�@�ӥ|���
    num[0]=temp/1000;
    temp%=1000;
    num[1]=temp/100;
    temp%=100;
    num[2]=temp/10;
    temp%=10;
    num[3]=temp;//�N�L�̤��O�s�inum[0~4]
    //printf("%d %d %d %d\n",num[0],num[1],num[2],num[3]);

    // 01234�����O�Ʀr���ĴX�h�Around�h�O�ĴX�ӼƦr
    for(int round=0; round<4; round++,start+=6,end+=6) // �����Ĥ@�ӼƦr�� �}�l�򵲧����|+6�A�ܦ��s���@�ӼƦr��A���ŧichar�U���������
    {
        //------------------0-----------------------
        //��0�h�G���F1�O"    *"�A4�O"*   *"�A��L���O"*****"
        int level=0;;
        if(num[round]==1||num[round]==4)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
        if(num[round]==4)
        {
            become_star(ans,level,start,start);
        }
        //------------------1-----------------------
        //��1�h�G56�O"*    "�A1237�O"    *"�A��L�O"*   *"
        level++;
        if((num[round]<5)||(num[round]>6))
        {
            become_star(ans,level,end,end);
        }
        if(num[round]<1||((num[round]>3)&&(num[round]!=7)))
        {
            become_star(ans,level,start,start);
        }
        //------------------2-----------------------
        //��2�h�G0�O"*   *"�A17�O"    *"�A��L�O"*****"
        level++;
        if(num[round]<2||num[round]==7)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
        if(num[round]==0)
        {
            become_star(ans,level,start,start);
        }
        //------------------3-----------------------
        //��3�h�G2�O"*    "�A68�O"*   *"�A��L�O"    *"�A
        level++;
        if(num[round]!=2)
        {
            become_star(ans,level,end,end);
        }
        if(num[round]%2==0&&num[round]!=4)
        {
            become_star(ans,level,start,start);
        }
        //------------------4-----------------------
        //��4�h�G147�O"    *"�A��L�O"*****"
        level++;
        if(num[round]%3==1||num[round]==9)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
    }
    for(int i=0; i<5; i++) // �v��L�X�r��
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}
