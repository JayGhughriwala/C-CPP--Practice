#include <iostream>
using namespace std;
int main()
{
    int N;
    int even_counter = 0;
    int odd_counter = 0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] % 2 == 0)
        {
            even_counter++;
        }
        else
        {
            odd_counter++;
        }
    }
    if (even_counter > odd_counter)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
    }
}