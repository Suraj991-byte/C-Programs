#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter a Row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("* ");
    for(j=2;j<n;j++)
    {
       if(i==1||i==n)
        printf("* ");
       else
        printf("  ");
    }
    printf("*\n");
    }
}



