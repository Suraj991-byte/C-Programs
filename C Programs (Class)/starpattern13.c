#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter a Number Of Rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }



}
