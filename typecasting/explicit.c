#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("A is %d\n",a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("B is %d\n",(int)b);
    printf ("type any character:\n");
    scanf("%c",&c);
    printf("character is %d",(int)c);
    return 0;
}