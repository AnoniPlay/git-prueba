#include <stdio.h>

long int I;
long int pf;

int main()
{
    pf = 600851475143;

    for (I = 2; pf/I; I++)
    {
        while (pf % I == 0)
        {
            pf = pf / I;

        }
    }

    printf("%ld", I -1);
}
