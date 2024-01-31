#include <stdio.h>
int main()
// if else statement
{
    int num;
    printf("enter the number less than 10\n");
    scanf("%d", &num);
    if (num <= 10)
    {
        printf("number less than 10");
    }
    else{
        printf("greater than 10");
    }
    return 0;
}