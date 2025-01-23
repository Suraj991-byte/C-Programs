#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter Number Of Rows :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
            printf(" ");
        for(j=0;j<i;j++)
            printf("%c",'A'+j);
        printf("\n");
    }
}
