#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        long N;
        long X, Y;
        cin >> N >> X >> Y;
        long counter = 0;
        long A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            if (A[i] <= X && A[i] % Y == 0)
            {
                counter++;
            }
        }
        cout << counter << endl;
    }
}