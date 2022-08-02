#include <iostream>
using namespace std;
int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        long long int N, K;
        cin >> N >> K;
        int temp;
        while (N >= 0)
        {
            temp = N;
            N = N - K;
        }
        cout << temp << endl;
    }
}