#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int h,g;//h:����  g:�ʧO
    double w;//�魫
    while(cin>>h>>g)//��J
    {
        if(g==1)//�k��
        {
            w= (h-80)*0.7;//����
        }
        else if(g==2)//�k��
        {
            w= (h-70)*0.6;//����
        }
        cout<<fixed<<setprecision(1)<<w<<endl;//��X��p�ƲĤ@��
    }
    return 0;
}
