#include<iostream>
using namespace std;

int main()
{
    int month;
    while(cin>>month)//�J�쵲���r���e�@����
    {
        if(month/3==1)//3 4 5
        {
            cout<<"Spring\n";
        }
        else if(month/3==2)//6 7 8
        {
            cout<<"Summer\n";
        }
        else if(month/3==3)//9 10 11
        {
            cout<<"Autumn\n";
        }
        else
        {
            cout<<"Winter\n";//12 1 2
        }
    }
    return 0;
}
