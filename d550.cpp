#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
class Node
{
public:
    int num[200];
    bool operator< (const Node node)const
    {
        int check = 0;
        while(num[check] == node.num[check] && check < m)
        {
            check++;
        }
        if(check == m)check--;
        return num[check] < node.num[check];
    }
};
Node arr[10000];
int main()
{
    while(cin >> n >> m)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i].num[j];
            }
        }
        sort(arr, arr+n);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << arr[i].num[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
