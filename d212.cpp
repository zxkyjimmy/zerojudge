#include <iostream>
using namespace std;
int main()
{
    unsigned long long arr[105] = {1, 1};
    for(int i = 2; i < 100; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    int n;
    while(cin >> n)
    {
        cout << arr[n] << endl;
    }
    return 0;
}
