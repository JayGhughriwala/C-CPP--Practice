#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int distance = abs(a - c) + abs(b - d);
        if (k >= distance && k % 2 == distance % 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}