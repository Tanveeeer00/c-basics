#include <stdio.h>
int main()
// if else if else
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("you have enter %d as your age\n",age);
    if(age>=18){
        printf("you can vote!");
    }
    else if(age>=10){
    printf(" you are between 10 to 18 you can vote to kids");
    }
    else if(age>=5){
        printf("you are between 5 to 10 you can vote to babies");
    }
    else{
        printf("you cannot vote!");
    }
    return 0;
}