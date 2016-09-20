#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
public:
    int x, y;
    bool operator< (Node node) const
    {
        if(x == node.x)return y > node.y;
        return x > node.x;
    }
};
Node arr[500000];
int result[500000], num;
int main()
{
    int n, t = 1;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)cin >> arr[i].x >> arr[i].y;
        sort(arr, arr+n);
        num = 0;
        int index = 0;
        while(index < n)
        {
            result[num] = index;
            while(arr[result[num]].x >= arr[index].x && arr[result[num]].y >= arr[index].y && index < n)index++;
            num++;
        }
        cout << "Case " << t << ":" << endl;
        cout << "Dominate Point: " << num << endl;
        for(int i = num-1; i >= 0; i--)
        {
            cout << "(" << arr[result[i]].x << "," << arr[result[i]].y << ")" << endl;
        }
        t++;
    }
    return 0;
}
