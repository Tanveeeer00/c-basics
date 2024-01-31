#include <stdio.h>
int main()
// & needs both true value
// | needs one true value
// ^ needs one true and false value
{
    int a=2;
    int b=3;
    printf("a&b= %d\n",a&b);
    printf("a|b= %d\n",a|b);
    printf("a^b= %d\n",a^b);
    return 0; 
}
// bit value
// 0 00
// 1 01
// 2 10
// 3 11
