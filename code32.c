#include<crtdefs.h>
int main()
{
    int n, i, num, a, max, second;
    max = a;
    second = a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
        {
            second = max;
            max = num;
        }
        else if(num > second && num < max)
        {
            second = num;
        }
    }

    if(second == a)
        printf("Second maximum does not exist");
    else
    {
        printf("Maximum = %d\n", max);
        printf("Second Maximum = %d", second);
    }

    return 0;
}
