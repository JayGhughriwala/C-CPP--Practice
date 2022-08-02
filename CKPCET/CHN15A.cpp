#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        short N, K;
        cin >> N >> K;
        short array[N];
        short wolverine_counter = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> array[i];
            if ((array[i] + K) % 7 == 0)
            {
                wolverine_counter++;
            }
        }
        cout << wolverine_counter << endl;
    }
}