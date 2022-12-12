#include <stdio.h>

int sum;
int M;
int N;

int main()
{
    M  = 1;
    N = 1;

    while (M <= 4000000)
    {
        M = M + N;
        N = M - N;

        if (M % 2 == 0)
        {
            sum = sum + M;
        }
    }

    printf("%d", sum);
}
