#include<iostream>
using namespace std;

int gcd(int x,int y)//����۰���̤j���]��
{
    if((x%y)==0)//�p�Gx�Qy�㰣
    {
        return y;//y���̤j���]��
    }
    x=x%y;//�_�h�Ax�ର��y���l��
    return gcd(y,x);//���j
}
int main()
{
    int x,y,ans;
    cin>>x>>y;

    ans=gcd(x,y);
    cout<<ans<<"\n";
    return 0;
}
