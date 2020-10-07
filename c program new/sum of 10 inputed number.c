// sum of 10 inputed number
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,sum=0,i=0;

    printf("\n Enter 10 numbers to calculate sum=");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&no);

        if(no<0)
        {
            no=-1*no;
        }
         sum=sum+no;
    }
    printf("\n Given 10 digit calculation =%d",sum);

    getch();
    return 0;
}
