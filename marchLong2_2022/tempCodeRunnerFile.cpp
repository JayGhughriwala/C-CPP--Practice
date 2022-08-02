#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long numbers[4];
        for (int i = 0; i < 4; i++)
        {
            // int temp;
            cin >> numbers[i];
            // cin >> temp;?
            // numbers[i] = abs(temp);
        }
        sort(numbers, numbers + 4);
        //     long long A, B, C, D;
        long long a = sqrt(numbers[3]);
        long long b = numbers[3] / a;
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
            else if (numbers[i] == (a - b))
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