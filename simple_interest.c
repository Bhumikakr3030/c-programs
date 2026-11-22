#include <stdio.h>

int main()
{
    float principal, rate, time, simple_interest;

    scanf("%f %f %f", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100;

    printf("%g\n", simple_interest);

    return 0;
}
