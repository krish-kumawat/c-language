// write a print if a number is prime or not.
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 0)
    {
        printf("the given number is prime");
    }
    else
    {
        printf("the given number is compositer");
    }
    return 0;
}