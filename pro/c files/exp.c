
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main()
{
    float f;
    double d;
    uint32_t a;
    uint64_t b;

    printf("Enter number: ");
    scanf("%lf", &d);
    f = (float)d;

    memcpy(&a, &f, 4);
    memcpy(&b, &d, 8);

    printf("\n32-bit IEEE 754:\n");
    for(int i=31; i>=0; i--)
    {
        printf("%u", (a>>i)&1);
        if(i==31 || i==23) printf(" ");
    }

    printf("\n\n64-bit IEEE 754:\n");
    for(int i=63; i>=0; i--)
    {
        printf("%llu", (unsigned long long)((b>>i)&1));
        if(i==63 || i==52) printf(" ");
    }

    return 0;
}
