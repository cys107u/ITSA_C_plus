#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    //�ت�
    char zodiac[12][12]= {"Aquarius","Pisces","Aries","Taurus","Gemini","Cancer","Leo","Virgo","Libra","Scorpio","Sagittarius","Capricorn"};
    int start[12] = { 21,19, 21, 21, 22, 22, 23, 23, 23, 24, 23, 22};//�C�ӬP�y�}�l���ɶ�(start[0]�O1��)
    int month,day;
    cin>>month>>day;
    if(day<start[month-1])//�p�G��b�P�y���}�l�ɶ��H�e
    {
        if(month==1)//�]�~Capricorn
        {
            month=13;
        }
        cout<<zodiac[month-2]<<"\n";
    }
    else//�Ϥ�
    {
        cout<<zodiac[month-1]<<"\n";
    }

    return 0;
}
