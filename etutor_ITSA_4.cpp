#include<iostream>
using namespace std;

int main()
{
    int hour_1,hour_2,min_1,min_2;
    int time_1,time_2,time,cost=0;
    cin>>hour_1>>min_1>>hour_2>>min_2;//��J
        time_1=hour_1*60+min_1;//�ഫ�� �p��*60 + ����
        time_2=hour_2*60+min_2;
        time=time_2-time_1; //��@���F�X����
        if(time<0)//�p�G�O�t����ܸ��
        {
            time+=(24*60);//+24�p��
        }
        time/=30;//�N�ɶ��ର�X�ӥb�p��
        if(time>0)
        {
            if(time<=4)//��p�ɤ�
            {
                cost+=time*30;//�b�p��30��
            }
            else
            {
                time-=4;
                cost+=120;//�����e��p�ɪ�����
                if(time<=4)//������b��p�ɤ�(�|�p�ɤ�)
                {
                    cost+=time*40;//�b�p��0��
                }
                else////������b��p�ɤ��W
                {
                    time-=4;
                    cost+=160;//�A������p�ɡ�|�p�ɪ�����
                    if(time>0)
                    {
                        cost+=60*time;//�b�p��60��
                    }
                }
            }
        }
        cout<<cost<<"\n";
    return 0;
}
