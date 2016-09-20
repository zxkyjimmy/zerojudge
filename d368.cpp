#include <iostream>
using namespace std;
class chess
{
public:
    uint64_t P, N, B, R, Q, K;
    uint64_t p, n, b, r, q, k;
    uint64_t e;
    char str[65];
    void read()
    {
        for(int i = 0; i < 64; i++)
        {
            cin >> str[i];
        }
    }
};
int main()
{
    return 0;
}
