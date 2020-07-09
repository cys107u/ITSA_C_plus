#include<iostream>
using namespace std;

int main()
{
    int row, col;
    while(cin>>row>>col)
    {
        int arr[row][col];
        for(int i=0;i<row;i++)//照著每個row的col輸入完跳下一個row的方式輸入
        {
            for(int j=0;j<col;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<col;i++)//col跟row互換輸出
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
