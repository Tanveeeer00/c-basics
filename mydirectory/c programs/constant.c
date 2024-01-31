#include<stdio.h>
int main()
#define c 3.14
// there are two ways to define constant in c programming
// 1.const keyword
// 2.#define preprocessor
{
    int a = 20;
    a=23;
    const float b= 63.25;
    // b=25.56;cannot do this since b is a constant 
    // c = 45.25;cannot do this since c is a constant
    printf ("hello world %d\n",a);
    printf ("hello world %.4f\n",b);
    printf("hello world %.4f",c);
    return 0;
}