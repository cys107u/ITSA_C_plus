#include <iostream>
using namespace std;

int main()
{
    int year;
    while(cin>>year)
    {
        if( ( (year%4)==0 && (year%100)!=0 ) || (year%400) ==0) //(�O4������ �B ���O100������) �άO (�O400������)
        {
            cout<<"Bissextile Year\n";
        }
        else    //��L���p
        {
            cout<<"Common Year\n";
        }
    }

    return 0;
}
