#include <stdio.h>

int collatz (long int n, int c);

int main (void)
{
    long int num;
    int result;

    printf("Enter a number: ");
    scanf("%ld",&num);
    result = collatz(num, 0);

    printf("Number of steps: %i\n", result);

    return 0;

}

int collatz(long int n, int c)
{
    if (n==1)
    {
        printf("%li\n",n);
        return c;
    }
    else if ((n%2) == 0)
    {
        printf("%li\n",n);
        c++;
        return collatz(n/2,c);
    }
    else
    {
        printf("%li\n",n);
        c++;
        return collatz((3*n)+1,c);
    }
}
