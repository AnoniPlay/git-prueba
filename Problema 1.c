#include <stdio.h>

int I;
int sum;

int main()
{
    for (I = 0; I < 1000; I++)
    {
        if (I%5 == 0 || I%3 == 0)
        {
            sum = I + sum;
        }
    }

    printf("%d", sum);
}
