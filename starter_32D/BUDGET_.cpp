#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        if (X / Y >= 30)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
