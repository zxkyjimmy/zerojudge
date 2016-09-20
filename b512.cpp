#include <iostream>
using namespace std;
int main()
{
    int n;
    long long a, b, result;
    long long v[10005], d[10005];
    char c;
    //while(cin)
    //{
        n = 0;
        while(cin >> a >> c >> b)
        {
            if(a == 0 && b == 0)break;
            d[n] = a;
            v[n] = b;
            n++;
        }
        result = 0;
        while(cin >> a >> c >> b)
        {
            if(a == 0 && b == 0)break;
            for(int i = 0; i < n; i++)
            {
                if(d[i] == a)
                {
                    result += b*v[i];
                }
            }
        }
        cout << result << endl;
    //}
    return 0;
}
