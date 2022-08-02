/*In this question every of 2 item purchase I get 3 rd item freee. */
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        int X;
        cin >> N;
        cin >> X;
        int sum = 0;
        for (int i = 1; i <= N; i++)
        {
            if (i % 3 != 0)
            {
                sum += X;
            }
            else
            {
                continue;
            }
        }
        cout << sum << endl;
    }
}