#include <stdio.h>
int main()
{
    int n, x, max, min;
    scanf("%d", &n);

    scanf("%d", &x);
    max = x;
    min = x;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        if (x < min)
        {
            min = x;
        }
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d\n", min);
    printf("%d\n", max);
    return 0;
}