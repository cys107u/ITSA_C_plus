#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int mi=0;
    double km=0;
    while(cin>>mi)//�b�J�쵲���r���e���_��
    {
        km=mi*(1.6);//�ഫ
        cout<<fixed<<setprecision(1)<<  km<<"\n";//��X
    }
    return 0;
}
