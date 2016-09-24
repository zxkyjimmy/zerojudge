#include <iostream>
#include <stack>
using namespace std;
class Node
{
public:
    int x, y;
};
int main()
{
    int n;
    while(cin >> n)
    {
        char arr[105][105] = {0};
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
            }
        }
        Node node;
        cin >> node.x >> node.y;
        node.x++;
        node.y++;
        stack<Node>s;
        s.push(node);
        while(!s.empty())
        {
            node = s.top();
            s.pop();
            if(arr[node.x][node.y] == '-')
            {
                arr[node.x][node.y] = '+';
                s.push(Node{node.x+1, node.y});
                s.push(Node{node.x-1, node.y});
                s.push(Node{node.x, node.y+1});
                s.push(Node{node.x, node.y-1});
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
