#include<iostream>
using namespace std;

int main()
{
    int row, col;
    while(cin>>row>>col)
    {
        int arr[row][col];
        for(int i=0;i<row;i++)//�ӵۨC��row��col��J�����U�@��row���覡��J
        {
            for(int j=0;j<col;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<col;i++)//col��row������X
        {
            for(int j=0;j<row;j++)
            {
                if(j==0)
                {
                    cout<<arr[j][i];
                }
                else
                cout<<" "<<arr[j][i];
            }
            cout<<"\n";
        }
    }
    return 0;
}
