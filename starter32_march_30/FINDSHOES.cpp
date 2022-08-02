#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        if (M == 0)
        {
            cout << N * 2 << endl;
        }
        else
        {
            if (M >= N)
            {
                cout << N << endl;
            }
            else
            {
                cout << (N + (N - M)) << endl;
            }
        }
    }
}
// if (N > M)
// {
//     int counter = 0;
//     int i = M;
//     while (i < N)
//     {
//         counter = counter + 2;
//         i++;
//     }
//     cout << counter + M << endl;
// }
// else if (N < M)
// {
//     int counter = 0;
//     int i = M;
//     while (i > N)
//     {
//         counter = counter + 2;
//         i--;
//     }
//     cout << counter - N << endl;
// }