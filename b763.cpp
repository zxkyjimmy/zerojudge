#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    bool check[1025] = {false};
    int num[200], count = 0, n, ans;
    for(int i = 2; i < 1024; i++)
    {
        if(!check[i])
        {
            for(int j = 2; i*j < 1025; j++)
            {
                check[i*j] = true;
            }
            n = i;
            while(n <= 1024)
            {
                num[count++] = n;
                n *= i;
            }
        }
    }
    sort(num, num+count);
    while(cin >> n)
    {
        ans = 0;
        while(num[ans] <= n)ans++;
        cout << ans << endl;
        for(int i = 0; i < ans; i++)
        {
            cout << num[i] << " ";
        }
        cout << endl;
    }
}
