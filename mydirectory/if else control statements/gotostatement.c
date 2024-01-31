#include <stdio.h>
int main()
{
    int x;
    for (int i=0;i<5;i++)
    {
        printf("\n hey guys \n \n");
        for (int j=0; j<3;j++)
        {
            printf ("type any no. & to exit: press 1\n");
            scanf("%d",&x);
            if (x==1)
            {
            goto end;// this goto will transfer the control to end: i.e out of both loop

            }
        }
    }
    end:
    printf("/'for/' loops are skipped as you pressed 1");
    return 0;
}