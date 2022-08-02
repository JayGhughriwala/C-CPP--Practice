#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        short A, B, X;
        cin >> A >> B >> X;
        X = (B - A) / X;
        cout << X << endl;
    }
}
