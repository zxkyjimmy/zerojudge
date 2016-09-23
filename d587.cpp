#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int arr[4] = {0};
        while(n--)
        {
            int d;
            cin >> d;
            arr[d]++;
        }
        for(int i = 1; i <= 3; i++)
        {
            for(int j = 0; j < arr[i]; j++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
