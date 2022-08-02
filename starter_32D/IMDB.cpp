#include <iostream>

using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long N;
        long X;
        cin >> N >> X;
        long S[N], R[N];
        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
            cin >> R[i];
        }
        int counter_rating = 0;
        int maximum_rate = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] <= X && R[i] >= maximum_rate)
            {
                counter_rating = R[i];
                maximum_rate = R[i];
            }
        }
        cout << counter_rating << endl;
    }
}