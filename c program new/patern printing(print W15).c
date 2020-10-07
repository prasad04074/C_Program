//Lower right trangular
#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0;

    printf("\n Please enter a odd value \n");
    printf("\n Enter a value of row and column =");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==1 || j==c || i+j==c+1 && j<=i || i==j && i>=(c+1)/2)
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
