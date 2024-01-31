#include <stdio.h>
int main()
{
    char a[25];
    printf("Enter your subject\n");
    scanf("%s", &a);
    printf("you have passed in %s subject\n", &a);
    if (a == "maths and science")
    {
        printf("you have passed in the maths and science that we are giving 45 points to you in gift");
    }
    else if (a == "maths")
    {
        printf("you have passed in the maths that we are giving 15 points to you in gift");
    }
    else if (a == "science")
    {
        printf("you have passed in the science that we are giving 15 points to you in gift");
    }
    else
    {
        printf("wrong input");
    }
    return 0;
}