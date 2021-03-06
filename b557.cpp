#include <iostream>
using namespace std;
constexpr int a[52] =
{
      3,  6,  9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39,
     42, 45, 48, 51, 54, 57, 60,  5, 10, 15, 20, 25, 30,
     35,  7, 14, 21, 28,  8, 16, 24, 32, 40,  9, 18, 11,
     12, 24, 13, 16, 20, 40, 60, 28, 33, 36, 39, 48, 65
};
constexpr int b[52] =
{
      4,  8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52,
     56, 60, 64, 68, 72, 76, 80, 12, 24, 36, 48, 60, 72,
     84, 24, 48, 72, 96, 15, 30, 45, 60, 75, 40, 80, 60,
     35, 70, 84, 63, 21, 42, 63, 45, 56, 77, 80, 55, 72
};
constexpr int c[52] =
{
      5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65,
     70, 75, 80, 85, 90, 95,100, 13, 26, 39, 52, 65, 78,
     91, 25, 50, 75,100, 17, 34, 51, 68, 85, 41, 82, 61,
     37, 74, 85, 65, 29, 58, 87, 53, 65, 85, 89, 73, 97
};
int main()
{
    int t, n, d, result;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int num[101] = {0};
        while(n--)
        {
            cin >> d;
            num[d]++;
        }
        result = 0;
        for(int i = 0; i < 52; i++)
        {
            result += num[a[i]]*num[b[i]]*num[c[i]];
        }
        cout << result << endl;
    }
    return 0;
}
