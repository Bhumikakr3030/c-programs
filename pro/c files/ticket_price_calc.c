#include <stdio.h>

int main()
{
    int age;
    float price;

    // printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5)
    {
        printf("Children under 5 years old get in free!\n");
        price = 0;
    }
    else if (age >= 5 && age <= 12)
    {
        price = 100 * 0.50;
    }
    else if (age >= 65)
    {
        price = 100 * 0.80;
    }
    else
    {
        price = 100;
    }

    printf("Ticket price: Rs. %.2f\n", price);

    return 0;
}
