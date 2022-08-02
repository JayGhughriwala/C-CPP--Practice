#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        short D, C;
        cin >> D >> C;
        short A1, A2, A3;
        cin >> A1 >> A2 >> A3;
        short B1, B2, B3;
        cin >> B1 >> B2 >> B3;
        int sum_first_day = A1 + A2 + A3;
        int sum_second_day = B1 + B2 + B3;
        int coupon_charge = C;
        int delivery_charge = D + D;
        if (sum_first_day < 150)
        {
            coupon_charge += D;
        }
        if (sum_second_day < 150)
        {
            coupon_charge += D;
        }
        if (coupon_charge < delivery_charge)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}