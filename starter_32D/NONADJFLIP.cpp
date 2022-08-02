#include <iostream>
#include <algorithm>
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
        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
        }
        sort(S, S + N);
        int counter = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == 0)
                counter++;
            else
                break;
        }
        cout << counter << endl;
    }
}