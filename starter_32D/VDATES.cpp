#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long D, L, R;
        cin >> D >> L >> R;
        if (D >= L && D <= R)
        {
            cout << "Take second dose now" << '\n';
        }
        else
        {
            if (D < L)
            {
                cout << "Too Early" << '\n';
            }
            else
            {
                cout << "Too Late" << '\n';
            }
        }
    }
}