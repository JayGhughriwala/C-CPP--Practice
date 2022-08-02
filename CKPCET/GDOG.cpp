#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        cout << N % K << endl;
    }
}