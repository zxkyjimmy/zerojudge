#include <iostream>
using namespace std;
int main()
{
    char c;
    int arr[17][32] = {0};
    for(int i = 1; i <= 15; i++)
    {
        for(int j = 1; j <= 30; j++)
        {
            cin >> c;
            if(c == '*')
            {
                arr[i][j] = -10;
                arr[i-1][j-1]++;
                arr[i-1][j]++;
                arr[i-1][j+1]++;
                arr[i][j-1]++;
                arr[i][j+1]++;
                arr[i+1][j-1]++;
                arr[i+1][j]++;
                arr[i+1][j+1]++;
            }
        }
    }
    for(int i = 1; i <= 15; i++)
    {
        for(int j = 1; j <= 30; j++)
        {
            if(arr[i][j] > 0)
            {
                cout << arr[i][j];
            }
            else if(arr[i][j] == 0)
            {
                cout << ".";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
