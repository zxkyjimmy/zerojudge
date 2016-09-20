#include <iostream>
using namespace std;
int main()
{
    char str[50005];
    int n;
    while(cin >> n)
    {
        cin >> str;
        int r = 0, g = 0, b = 0;
        for(int i = 0; i < n; i++)
        {
            int tmp_r = r, tmp_g = g, tmp_b = b;
            r += (str[i] == 'r');
            g = max(tmp_r, tmp_g) + (str[i] == 'g');
            b = max(tmp_r, max(tmp_g, tmp_b)) + (str[i] == 'b');
        }
        cout << max(r, max(g, b)) << endl;
    }
    return 0;
}
