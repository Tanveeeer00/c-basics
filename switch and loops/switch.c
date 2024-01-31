#include <stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);
    switch(age)
    {
        case 3:
        printf("the age is 3");
        break;
        case 14:
        printf("the age is 14");
        switch (marks)
        {
            case 33:
            printf("the marks is 33");
            break;
            default:
            printf("the marks is not 33");
            break;
        }

        break;
        default:
        printf("the age is not 3");
        break;
    }
}
    