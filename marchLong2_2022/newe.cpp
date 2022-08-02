#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T > 0 && T <= pow(10, 5))
    {
        while (T--)
        {
            long long numbers[4];
            for (int i = 0; i < 4; i++)
            {
                long long temp;
                cin >> temp;
                numbers[i] = (long long)abs(temp);
            }
            sort(numbers, numbers + 4);
            //     long long A, B, C, D;
            long long b = (numbers[1] + numbers[2]) / 2;
            long long a = numbers[3] / b;
            int counter_win = 0;
            for (int i = 0; i < 4; i++)
            {
                if (numbers[i] == a + b)
                {
                    counter_win++;
                }
                else if (numbers[i] == abs(a - b))
                {
                    counter_win++;
                }
                else if (numbers[i] == abs(a / b))
                {
                    counter_win++;
                }
                else if (numbers[i] == abs(a * b))
                {
                    counter_win++;
                }
            }
            if (counter_win < 3)
            {
                cout << a << " " << b << endl;
            }
            else
            {
                a = -1;
                b = -1;
                cout << a << " " << b << endl;
            }
            // cout << a << b << endl;

            // cout << b << endl;
        }
    }
}