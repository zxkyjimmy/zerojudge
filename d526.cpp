#include <iostream>
#include <stack>
using namespace std;
class Node
{
public:
    int data;
    Node *llink = nullptr, *rlink = nullptr;
};
int main()
{
    int n;
    while(cin >> n)
    {
        Node arr[1005];
        for(int i = 0; i < n; i++)cin >> arr[i].data;
        for(int i = 1; i < n; i++)
        {
            Node *tmp = arr, *parent;
            int data = arr[i].data;
            while(tmp)
            {
                parent = tmp;
                if(data < tmp->data)
                {
                    tmp = tmp->llink;
                }
                else
                {
                    tmp = tmp->rlink;
                }
            }
            if(data < parent->data)
            {
                parent->llink = arr+i;
            }
            else
            {
                parent->rlink = arr+i;
            }
        }
        stack<Node*>s;
        s.push(arr);
        while(!s.empty())
        {
            Node *node = s.top();
            s.pop();
            if(node)
            {
                cout << node->data << " ";
                s.push(node->rlink);
                s.push(node->llink);
            }
        }
        cout << endl;
    }
    return 0;
}
