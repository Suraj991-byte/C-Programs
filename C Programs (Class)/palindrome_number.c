#include<stdio.h>
void main()
{

    int rev=0,n,temp;

    printf("Enter a Number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
     int rem=n%10;
     rev=rev*10+rem;
     n/=10;
    }

    if(temp==rev)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");

    getch();
}
