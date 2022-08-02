#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int A, B, C;
        cin >> A >> B >> C;
        long long int array[3];
        array[0] = A + B;
        array[1] = B + C;
        array[2] = C + A;
        sort(array, array + 3);
        cout << array[2] << endl;
    }
}