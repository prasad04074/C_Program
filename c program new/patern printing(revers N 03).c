// print revers N
//
// *         *
// *       * *
// *    *    *
// * *       *
// *         *
//   Note = please inter a same value

#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0;

    printf("\n Enter a row and column =");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            if(j==1 || j==c || i+j==r+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
