#include <iostream>
using namespace std;
int main()
{
    int arr[10005], n, c;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        c = 0;
        for(int i = 0; i < n-1; i++)
        {
            for(int j = 0; j < n-1; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                    c++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
