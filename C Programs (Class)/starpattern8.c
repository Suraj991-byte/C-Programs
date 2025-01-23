#include<stdio.h>
void main()
{
    int i,j,k,n;

    printf("Enter a Number of Rows :");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        for(k=i;k<n;k++)
            printf(" ");

        printf("#");
        for(j=2;j<=i;j++)
                printf("*");
        printf("\n");
    }
}
