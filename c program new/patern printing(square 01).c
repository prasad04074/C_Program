// patern printing square
#include<stdio.h>
#include<conio.h>
int main()
{
    int row=0,col=0,i=0,j=0;

    printf("======================-*****-===================");
    printf("\n Enter a rows And columns =");
    scanf("%d%d",&row,&col);

    for(i=1;i<=col;i++)
    {
        for(j=1;j<=row;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    printf("======================-*****-===================");
    getch();
    return 0;
}
