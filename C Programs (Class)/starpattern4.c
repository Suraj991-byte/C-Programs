#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("Enter a number of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("#");
        for(j=2;j<=i;j++)
        {
            if(i==j)
                printf("#");
            else
                printf("*");
        }
          printf("\n");
    }



}
