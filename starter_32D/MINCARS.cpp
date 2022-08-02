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
        if (N <= 4)
            cout << "1" << endl;
        else
        {
            int counter = 0;
            while (N >= 1)
            {
                N = N - 4;
                counter++;
            }
            cout << counter << endl;
        }
    }
}