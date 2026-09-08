#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    printf("the no of digits are %d", i);

    return 0;
}