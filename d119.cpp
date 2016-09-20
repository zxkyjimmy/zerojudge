#include <iostream>
#include <sstream>
using namespace std;
int money[10] = {1, 5, 10, 20, 50, 100, 200, 500, 1000, 2000};
long long DP[10][50001] = {1};
int main()
{
    for(int i = 1; i < 10; i++)
    {
        DP[i][0] = 1;
    }
    for(int i = 1; i < 50001; i++)
    {
        DP[0][i] = 1;
    }
    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j < 50001; j++)
        {
            int tmp = j;
            while(tmp >= 0)
            {
                DP[i][j] += DP[i-1][tmp];
                tmp -= money[i];
            }
        }
    }
    string str;
    stringstream ss;
    int d, sum;
    while(getline(cin, str))
    {
        ss.str("");
        ss.clear();
        ss << str;
        sum = 0;
        while(ss >> d)
        {
            sum += d;
        }
        if(sum == 0)break;
        cout << DP[9][sum]-1 << endl;
    }
    return 0;
}
