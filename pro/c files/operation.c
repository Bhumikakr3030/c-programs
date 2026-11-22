
#include <stdio.h>
int main()
{
    int num1, num2;
    char oper;

    printf("Enter operation: ");
    scanf(" %c", &oper);

    printf("Enter 2 nums: ");
    scanf("%d %d", &num1, &num2);

    if (oper == '+')
    {
        printf("Operation = %d\n", num1 + num2);
    }
    else if (oper == '-')
    {
        printf("Operation = %d\n", num1 - num2);
    }
    else if (oper == '*')
    {
        printf("Operation = %d\n", num1 * num2);
    }
    else if (oper == '/')
    {
        if (num2 != 0)
        {
            printf("Operation = %d\n", num1 / num2);
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
