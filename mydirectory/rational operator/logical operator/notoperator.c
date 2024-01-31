#include <stdio.h>
int main()
// ! not operator
{
    int a=1;
    int b=0;
    printf("a && b = %d\n",!a&&b);
    printf("a || b = %d\n",!a||b);
    return 0;
}