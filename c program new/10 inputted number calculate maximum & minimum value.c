// 10 inputted number calculate maximum & minimum value
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,ma=0,mini=99999,i=0;

    printf("\n Enter 10 values into maximum & minimum value=");

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
        while(no<mini)
       {
          mini=no;
          break;
       }
    }
    printf("\n Given value is maximum value =%d",ma);
    printf("\n Given value is minimum value =%d",mini);

    getch();
    return 0;
}
