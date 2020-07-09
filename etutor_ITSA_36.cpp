#include <iostream>
using namespace std;

int main()
{
    int year;
    while(cin>>year)
    {
        if( ( (year%4)==0 && (year%100)!=0 ) || (year%400) ==0) //(是4的倍數 且 不是100的倍數) 或是 (是400的倍數)
        {
            cout<<"Bissextile Year\n";
        }
        else    //其他情況
        {
            cout<<"Common Year\n";
        }
    }

    return 0;
}
