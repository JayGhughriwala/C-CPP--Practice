#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int U, V, A, S;
        cin >> U >> V >> A >> S;
        if (U * U - 2 * A * S <= V * V)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
}