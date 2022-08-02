#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int S[N];
        int D[N];
        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> D[i];
        }
        int counter = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == D[i])
            {
                counter++;
            }
            else
            {
                continue;
            }
        }
        cout << counter << endl;
    }
}