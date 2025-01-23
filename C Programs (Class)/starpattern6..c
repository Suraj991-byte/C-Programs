#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a number of rows :");
    scanf("%d",&n);

    for(int i=1;i<=5;i++)
    {
        for(int k=i;k<n;k++)
            printf(" ");

        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
