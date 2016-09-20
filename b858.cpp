#include <iostream>
using namespace std;
int main()
{
    int t, n,arr[104], result, item;
    cin >> t;
    while(t--)
    {
        int c[100005] = {0};
        cin >> n;
        result = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            result += arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            item = arr[i];
            for(int j = result; j - item >= 0; j--)
            {
                if((c[j-item]+item) <= result/2)
                {
                    c[j] = max(c[j], c[j-item]+item);
                }
            }
            for(int j = 0; j < result; j++)
            {
                c[j+1] = max(c[j], c[j+1]);
            }
        }
        cout << result - c[result] << endl;
    }
    return 0;
}
