#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(((x*x)+(y*y))<=10000)//�a�J�����T���Ωw�z�Ga^2+b^2=c^2�A�p�Gxy����M���j��b�|����
        {
            cout<<"inside\n";
        }
        else//�Ϥ�
        {
            cout<<"outside\n";
        }
    }
    return 0;
}
