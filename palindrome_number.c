#include <stdio.h>
int main()
{
    int n, reminder = 0, reverse = 0;

    scanf("%d", &n);
    int original = n;
    for (; n != 0; n = n / 10)
    {
        reminder = n % 10;
        reverse = reverse * 10 + reminder;
    }
    if (original == reverse)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}
