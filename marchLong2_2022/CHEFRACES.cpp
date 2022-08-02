#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, A, B;
        cin >> X >> Y >> A >> B;
        int medal_counter = 0;
        if (X != A && X != B)
        {
            medal_counter++;
        }
        if (Y != A && Y != B)
        {
            medal_counter++;
        }
        cout << medal_counter << endl;
    }
}