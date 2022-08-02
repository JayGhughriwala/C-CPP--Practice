#include <iostream>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        short N;
        cin >> N;
        int Total_sum = (N * (N + 1)) / 2;
        if (Total_sum % 2 == 0)
        {
            cout << N << endl;
        }
        else
        {
            cout << N - 1 << endl;
        }
    }
}