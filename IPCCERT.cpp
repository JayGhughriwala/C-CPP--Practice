#include <iostream>
using namespace std;
int main()
{
    short N, K;
    int M;
    cin >> N >> M >> K;
    int T[N][K];
    int M_counter = 0;
    int M_sum = 0;
    int Q = 0;
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < K; ++j)
        {
            cin >> T[i][j];
            M_sum += T[i][j];
        }
        cin >> Q;
        if (M_sum >= M && Q <= 10)
        {
            ++M_counter;
            M_sum = 0;
        }
        else
        {
            M_sum = 0;
        }
    }
    cout << M_counter << endl;
}