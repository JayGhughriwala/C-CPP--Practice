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
            if (numbers[3] == 0)
            {
                cout << "-1 -1" << endl;
            }
            else
            {

                long long a = sqrt(numbers[3]);
                long long b = numbers[3] / a;
                if (b == 0)
                {
                    cout << "-1 -1" << endl;
                    break;
                }
                int counter_for_run = 0;

                for (int i = 0; i < 4; i++)
                {
                    if (numbers[i] == (a * b))
                    {
                        counter_for_run++;
                    }
                    else if (numbers[i] == (a / b))
                    {
                        counter_for_run++;
                    }
                    else if (numbers[i] == (a + b))
                    {
                        counter_for_run++;
                    }
                    else if (numbers[i] == abs(a - b))
                    {
                        counter_for_run++;
                    }
                    else
                    {
                        continue;
                    }
                }
                if (counter_for_run < 4)
                {
                    a = -1;
                    b = -1;
                    cout << a << " " << b << endl;
                }
                else
                {
                    cout << a << " " << b << endl;
                }
            }
        }
    }
}