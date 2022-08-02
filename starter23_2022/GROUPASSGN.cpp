#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        int X;
        cin >> N;
        cin >> X;
        int X_partner = (2 * N) - (X - 1);
        cout << X_partner << endl;
    }
}