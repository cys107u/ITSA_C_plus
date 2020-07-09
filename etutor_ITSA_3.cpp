#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(((x*x)+(y*y))<=10000)//帶入直角三角形定理：a^2+b^2=c^2，如果xy平方和不大於半徑平方
        {
            cout<<"inside\n";
        }
        else//反之
        {
            cout<<"outside\n";
        }
    }
    return 0;
}
