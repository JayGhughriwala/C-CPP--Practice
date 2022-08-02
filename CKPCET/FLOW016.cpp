#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long A, B;
        cin >> A >> B;
        long GCD_VALUE = __gcd(A, B);
        long LCM_VALUE = ((A * B) / GCD_VALUE);
        cout << GCD_VALUE << " " << LCM_VALUE << endl;
    }
}