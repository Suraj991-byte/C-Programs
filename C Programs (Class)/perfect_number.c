#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=1;i<n/2;i++)
    {
        if(n%2==0)
            sum+=i;
    }
    if(sum==n)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    getch();
}
