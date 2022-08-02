#include <iostream>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        short N, P, X, Y;
        cin >> N >> P >> X >> Y;
        short A[N];
        short counter = 0;
        for (short i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (short i = 0; i < P; i++)
        {
            if (A[i] == 0)
                counter += X;
            else
                counter += Y;
        }
        cout << counter << endl;
    }
}