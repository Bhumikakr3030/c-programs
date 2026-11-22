#include <stdio.h>

int main()
{
    int n, i;
    int power = 1;

    printf("Enter the number : ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", power);
            power = power * 2;
        }
    }
    else
    {
        printf("Error : Number should be an positive number.\n");
    }

    return 0;
}

