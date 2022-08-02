#include <iostream>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        short X, Y;
        cin >> X >> Y;
        if (X < Y)
        {
            cout << "FIRST" << endl;
        }
        else if (X == Y)
        {
            cout << "ANY" << endl;
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }
}