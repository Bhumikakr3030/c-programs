#include <stdio.h>
int main()
{
    int a, b;
    char oper;

    printf("Enter operation: ");
    scanf(" %c", &oper);

    printf("Enter 2 nums: ");
    scanf("%d %d", &a, &b);

    if (oper == '+')
    {
        printf("Operation = %d\n", a + b);
    }
    else if (oper == '-')
    {
        printf("Operation = %d\n", a - b);
    }
    else if (oper == '*')
    {
        printf("Operation = %d\n", a * b);
    }
    else if (oper == '/')
    {
        if (b != 0)
        {
            printf("Operation = %d\n", a / b);
        }
        else
        {
            printf("Invalid division\n");
        }
    }
    else
    {
        printf("Invalid operation\n");
    }

    return 0;
}

