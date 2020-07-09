#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    //建表
    char zodiac[12][12]= {"Aquarius","Pisces","Aries","Taurus","Gemini","Cancer","Leo","Virgo","Libra","Scorpio","Sagittarius","Capricorn"};
    int start[12] = { 21,19, 21, 21, 22, 22, 23, 23, 23, 24, 23, 22};//每個星座開始的時間(start[0]是1月)
    int month,day;
    cin>>month>>day;
    if(day<start[month-1])//如果日在星座的開始時間以前
    {
        if(month==1)//魔羯Capricorn
        {
            month=13;
        }
        cout<<zodiac[month-2]<<"\n";
    }
    else//反之
    {
        cout<<zodiac[month-1]<<"\n";
    }

    return 0;
}
