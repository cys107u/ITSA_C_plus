#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int kWh_stand[5]= {0,120,330,500,700};//����׃�M�õĶȔ�
    double summer[5]= {2.10, 3.02, 4.39, 4.97, 5.63 };//�����M��
    double non_summer[5]= {2.10, 2.68, 3.61, 4.01, 4.50 };//�������M��
    int kWh,temp;//kWh:�Ȕ�
    double summer_total=0,non_summer_total=0;
    cin>>kWh;
    for(int i=4;kWh>0;i--)//�ڶȔ��w��ǰ
    {
        if(kWh>kWh_stand[i])//���������M�˜ʵĶȔ�
        {
            temp=kWh-kWh_stand[i];//�㳬�^����
            summer_total+=temp*summer[i];//���M�����M��
            non_summer_total+=temp*non_summer[i];//���M�������M��
            kWh-=temp;//�۳����^�Ĳ���
        }
    }
    cout<<"Summer months:"<<fixed<<setprecision(2)<<summer_total<<endl;//ݔ������
    cout<<"Non-Summer months:"<<fixed<<setprecision(2)<<non_summer_total<<endl;//ݔ��������

return 0;
}
