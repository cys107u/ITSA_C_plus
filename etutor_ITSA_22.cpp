#include<iostream>
using namespace std;
int is_tie(int grath[3][3])//�����X1 ���ӭt��X0
{
    int flag=0;
    for(int row=0;row<3;row++)//�P�_�C����u���S���T��1�ΤT��0
    {
        flag=0;
        for(int col=0;col<3;col++)
        {
            flag+=grath[row][col];
        }
        if(flag==0||flag==3)
        {
            return 0;
        }
    }
    for(int col=0;col<3;col++)//�P�_�C�����u���S���T��1�ΤT��0
    {
        flag=0;
        for(int row=0;row<3;row++)
        {
            flag+=grath[row][col];
        }
        if(flag==0||flag==3)
        {
            return 0;
        }
    }
            flag=0;
    for(int i=0;i<3;i++)//�P�_���W��k�U���S���T��1�ΤT��0
    {
            flag+=grath[i][i];
    }
    if(flag==0||flag==3)
        {
            return 0;
        }
                flag=0;
    for(int i=0;i<3;i++)//�P�_�k�W�쥪�U���S���T��1�ΤT��0
    {

        flag+=grath[i][2-i];
    }
    if(flag==0||flag==3)
        {
            return 0;
        }
        return 1;//�����s���@���u�����p�������ߡA����
}

int main()
{
    int grath[3][3];
    for(int row=0;row<3;row++)//��J
    {
        for(int col=0;col<3;col++)
        {
            cin>>grath[row][col];
        }
    }
    if(is_tie(grath))//1��ܥ���
    {
        cout<<"False\n";
    }
    else//0��ܦ��ӭt
    {
        cout<<"True\n";
    }
    return 0;
}
