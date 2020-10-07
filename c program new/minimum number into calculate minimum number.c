// minimum number for 10 inputted number
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,mini=99999,i=0;

    printf("\n Enter 10 values into minimum =");

    for(i=1;i<=10;i++)
    {
        scanf("%d",&no);
        if(no<0)
        {
            no=-1*no;
        }
        while(no<mini)
       {
          mini=no;
          break;
       }
    }
    printf("\n Given value is minimum value =%d",mini);

    getch();
    return 0;
}

