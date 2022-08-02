#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long N;
        cin >> N;
        long sum = 0;
        sum = N % 10;
        int rem;
        while (N > 0)
        {
            rem = N % 10;
            N = N / 10;
        }
        sum += rem;
        cout << sum << endl;
    }
}