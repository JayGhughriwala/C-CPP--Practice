#include <iostream>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        short N, M, K;
        cin >> N >> M >> K;
        short A[N];
        short ans = 0;
        short sum = 0;
        for (short i = 0; i < N; i++)
        {
            cin >> A[i];
            sum += A[i];
            if (i == M - 1 && sum == M)
            {
                ans = K;
            }
        }
        if (sum == N)
            ans = 100;
        cout << ans << endl;
    }
}