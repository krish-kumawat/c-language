// que - display this gp - 1,2,4,8,16,32,....upto "n"terms..?
// An=ar to the power n-1
//  without mathes solve this que.
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i = i++)
    {
        printf("%d ", a);
        a = a * 2;
    }
    return 0;
}