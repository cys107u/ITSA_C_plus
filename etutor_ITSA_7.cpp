#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int total,x_R,x_I,y_R,y_I,ans_R=99,ans_I=99;
    cin>>total;//��J�����
    for(int round=0;round<total;round++)//�X�Ӵ���]�X��
    {
        char compute[2];
        cin>>compute;//��J�B��Ÿ�
        cin>>x_R>>x_I>>y_R>>y_I;//��Jxy����ƩM���
        if(strcmp(compute,"+")==0)//+
        {
            ans_R=x_R+y_R;
            ans_I=x_I+y_I;
        }
        else if(strcmp(compute,"-")==0)//-
        {
            ans_R=x_R-y_R;
            ans_I=x_I-y_I;
        }
        else if(strcmp(compute,"*")==0)//*
        {
            ans_R=(x_R*y_R)-(x_I*y_I);//��Ƭۭ�-��Ƭۭ�
            ans_I=(x_R*y_I)+(x_I*y_R);//��Ƶ�Ƥ����ۥ[
        }
        cout<<ans_R<<" "<<ans_I<<"\n";
    }
    return 0;
}
