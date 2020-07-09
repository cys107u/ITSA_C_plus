#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;//有幾個學生的成績
    for(int round=0;round<N;round++)//就做幾次
    {
        int point[3],total=0,more_than_sixty=0;
        for(int i=0;i<3;i++)
        {
            cin>>point[i];//輸入各科成績
            total+=point[i];//同時加進總分;
            if(point[i]>=60)
            {
                more_than_sixty++;//同時判斷有沒有60分以上;
            }
        }
        if(more_than_sixty==3||total>=220)//3個60以上或總分220以上
        {
            cout<<"P\n";
        }
        else if(more_than_sixty==2&&total<220)//2個60以上且總分低於220
        {
                cout<<"M\n";
        }
        else if(more_than_sixty==1)//1科60以上
        {
            if(point[0]>=80||point[1]>=80||point[2]>=80)//那一科80以上
            {
                cout<<"M\n";
            }
            else//反之
            {
                cout<<"F\n";
            }
        }
        else//其他情況
        {
           cout<<"F\n";
        }

    }
    return 0;
}
