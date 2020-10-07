//write a program to calculate even,odd & natural value
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,temp=0,dig=0,even=0,odd=0,nat=0;

    printf("\n Enter a value to count Even ,odd &natural value=");
    scanf("%d",&no);

    temp=no;

    if(temp<0)
    {
        temp=-1*temp;
    }
    while(temp>0)
    {
        dig=temp%10;
        if(dig==0)
        {
            nat++;
        }
        else if(dig%2==0)
        {
                even++;
        }
        else
        {
            odd++;
        }
        temp=temp/10;
    }
    printf("\n given value %d into natural value =%d",no,nat);
    printf("\n given value %d into Even value =%d",no,even);
    printf("\n given value %d into odd value =%d",no,odd);

    getch();
    return 0;
}
