#include <iostream>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        short N, A, B, C;
        cin >> N >> A >> B >> C;
        if ((A + C) >= N && B >= N)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}