#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        short w1, w2, x1, x2, M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        int minimum, maximum;
        minimum = w1 + (M * x1);
        maximum = w1 + (M * x2);
        if (minimum <= w2 && w2 <= maximum)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}