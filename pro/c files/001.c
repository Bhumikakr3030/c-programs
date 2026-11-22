#include<stdio.h>
int main()
{
    int var;
    char ch;
    float f;
    double d;

    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("Enter the integer: ");
    scanf("%d", &var);
    printf("Enter the float: ");
    scanf("%f", &f);
    printf("Enter the double: ");
    scanf("%lf", &d);
   
   
   /*printf("Enter the character, int,float,double: ");
    scanf("%c %d %f %lf", &ch, &var, &f, &d);*/

    printf("var ----- %d\n", var);
    printf("ch ----- %c\n", ch);
    printf("f ----- %f\n", f);
    printf("d ----- %lf\n", d);

}