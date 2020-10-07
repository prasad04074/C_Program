#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,i=0,j=0;

    printf("\n Enter a value of Row and Column =");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==(c+1)/2 || i==1 && j>=(c+1)/2-1 && j<=(c+1)/2+1 || i==r && j>=(c+1)/2-1 && j<=(c+1)/2+1 )
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
