#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int L, R;
        cin >> L >> R;
        cout << (2 * R - 2 * L) + 1 << endl;
    }
}