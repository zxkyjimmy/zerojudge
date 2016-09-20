#include <iostream>
using namespace std;
int main()
{
    int n, c;
    while(cin >> n)
    {
        c = 0;
        int arr[30005] = {0}, r;
        for(int i = 0; i < n; i++)
        {
            cin >> r;
            arr[r]++;
            if(arr[r] > c)
            {
                c = arr[r];
            }
        }
        for(int i = 1; i <= 30000; i++)
        {
            if(arr[i] == c)
            {
                cout << i << " " << c << endl;
            }
        }
    }
    return 0;
}
