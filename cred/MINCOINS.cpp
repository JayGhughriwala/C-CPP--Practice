#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X;
        cin >> X;
        int coin_counter = 0;
        /* How many 5 rupee and 10 rupee coin required that we want*/
        while (X > 0)
        {
            if (X % 10 == 0)
            {
                coin_counter++;
                X -= 10;
            }
            else if (X % 10 == 5)
            {
                coin_counter++;
                X -= 5;
            }
            else
            {

                break;
            }
        }
        if (coin_counter == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << coin_counter << endl;
        }
    }
}