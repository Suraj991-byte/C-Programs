#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("Enter number of rows :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }
    getch();
}
