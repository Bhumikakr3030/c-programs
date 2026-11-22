#include <stdio.h>

int main()
{
    int num1, num2, num3, middle;

    printf("Enter the Three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num2 > num3)
        {
            middle = num2;
        }
        else
        {
            if (num1 > num3)
            {
                middle = num3;
            }
            else
            {
                middle = num1;
            }
        }
    }
    else
    {
        if (num1 > num3)
        {
            middle = num1;
        }
        else
        {
            if (num2 > num3)
            {
                middle = num3;
            }
            else
            {
                middle = num2;
            }
        }
    }

    printf("The middle number is %d\n", middle);

    return 0;