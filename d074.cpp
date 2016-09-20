#include <iostream>
using namespace std;
int main()
{
    int n, result = 0, data;
    cin >> n;
    while(n--)
    {
        cin >> data;
        result = max(result, data);
    }
    cout << result << endl;
    return 0;
}
