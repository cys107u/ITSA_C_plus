#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float t_min=1e9;//��ʼ��:�ܴ����Сֵ�p�Ȭ��ܤj
    float t_max=-1e8;//��ʼ��:��С�����ֵ�p�Ȥj�ȫܤp
    float tmp;
    for(int i=0;i<10;i++)
    {
        cin>>tmp;//ÿݔ��һ��
        t_max=max(t_max,tmp); //ݔ���Ŀǰ���ֵȡ�^��
        t_min=min(t_min,tmp); //ݔ���Ŀǰ��Сֵȡ�^С
    }
    cout <<"maximum:"<< fixed  <<  setprecision(2) << t_max << "\nminimum:" << t_min <<  endl;
    return 0;
}
