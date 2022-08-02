#include <iostream>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        float S, A, B;
        float C;
        cin >> S >> A >> B >> C;
        float value = S + ((S * C) / 100);
        if (value >= A && value <= B)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}