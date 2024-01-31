#include <stdio.h>
int main()
// format specifiers
{
    int a = 12;
    float b = 3.14;
    char c= 'T';
    int d = 12;
    int e = -12;
    char str[]="greeks for greek";
    double f=0.0;
    printf("used to print the signed integer %d\n",a);
    printf("used to print thefloat values %f\n",b);
    printf("used to print the character %c",c);
    printf("used to print the unsigned integer is %i\n",d);
    printf("used to print the unsigned integer is %u\n",e);
    printf("used to print the string %s\n",str);
    printf("used to print the string %20s\n",str);
    printf("used to print the string %-20s\n",str);
    printf("used to print the string %20.5s\n",str);
    printf("used to print the string %-20.4s\n",str);
    printf("used to print the string %-20.5s\n",str);
    scanf("%lf",&f);
    printf("used to print the double integer %lf\n",f);
    return 0;
}