#include <iostream>
using namespace std;
class Board
{
public:
    unsigned long long a = 0, b = 0;
    Board() = default;
    Board(unsigned long long v1, unsigned long long v2):a(v1), b(v2){}
    Board operator&(Board board)
    {
        return Board(a&board.a, b&board.b);
    }
    Board operator|(Board board)
    {
        return Board(a|board.a, b|board.b);
    }
    Board operator^(Board board)
    {
        return Board(a^board.a, b^board.b);
    }
    Board operator~()
    {
        return Board(~a, ~b);
    }
    Board operator<<(int s)
    {
        return Board((a<<s) | b >> (64-s), b<<s);
    }
    Board operator>>(int s)
    {
        return Board((a>>s), a<<(64-s) | b>>s);
    }
};
int main()
{
    int m, n, s;
    while(cin >> m >> n)
    {
        s = m+n;
    }
    return 0;
}
