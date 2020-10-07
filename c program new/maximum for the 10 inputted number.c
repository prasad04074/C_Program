// maximum number for 10 inputted number
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,ma=0,i=0;

    printf("\n Enter 10 values into maximum =");

    for(i=1;i<=10;i++)
    {
        scanf("%d",&no);
        if(no<0)
        {
            no=-1*no;
        }
        while(no>ma)
       {
          ma=no;
          break;
       }
    }
    printf("\n Given value is maximum value =%d",ma);

    getch();
    return 0;
}
