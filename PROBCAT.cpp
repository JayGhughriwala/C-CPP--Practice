#include <iostream>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        short X;
        cin >> X;
        if (X >= 1 && X < 100)
            cout << "Easy" << endl;
        else if (X >= 100 && X < 200)
            cout << "Medium" << endl;
        else if (X >= 200 && X <= 300)
            cout << "Hard" << endl;
    }
}