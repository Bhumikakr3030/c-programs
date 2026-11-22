#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Neither odd nor even\n");
    }
    else
    if (num > 0)
    {
        if(num % 2== 0)
        {
            printf("Positive odd\n");
        }
        else
        {
            printf("Positive even\n");
        }
    }
    else 

        if(num % 2!= 0)
        {
            printf("Negative odd\n");
        }
        else
        {
            printf("Negative even\n");
        }
        return 0;
    }


    