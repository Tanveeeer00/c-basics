#include<stdio.h>
int main ()
// nested statement
{
    int a;
    printf("enter either 0 or 1\n");
    scanf("%d",&a);
    if (a==0){
        printf("number 0 is entered");
    }
    else{
        if (a==1){
            printf("number 1 is entered");
        }
        else{
            printf("wrong input");
        }
    }
    return 0;
}