#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int S;
        int answer;
        int holder = 1;
        cin >> S;
        if (S == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            answer = -holder - S;
            cout << answer << endl;
        }
    }
}