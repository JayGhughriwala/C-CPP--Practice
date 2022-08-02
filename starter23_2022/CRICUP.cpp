#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X;
        int Y;
        int D;
        cin >> X >> Y >> D;
        if (abs(X - Y) <= D)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}