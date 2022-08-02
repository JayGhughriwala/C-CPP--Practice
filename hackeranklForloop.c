/*create a pattern like this
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void pattern(int N)
{
    for (int i = N; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    pattern(n);
    return 0;
}