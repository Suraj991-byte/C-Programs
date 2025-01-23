#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,cnt=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            cnt++;
    }

    if(cnt==2)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    getch();
}
