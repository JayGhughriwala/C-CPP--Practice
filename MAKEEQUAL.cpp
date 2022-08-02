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
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int max = *max_element(A, A + N);
        int min = *min_element(A, A + N);
        cout << max - min << endl;
    }
}