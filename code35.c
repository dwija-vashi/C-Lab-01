#include<crtdefs.h>
int main()
{
    int n, sum, q;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n >= 10)
    {
        sum = 0;

        while(n > 0)
        {
            q = n % 10;
            sum = sum + q;
            n = n / 10;
        }

        n = sum;
    }

    printf("Single Digit Answer = %d", n);

    return 0;
}
