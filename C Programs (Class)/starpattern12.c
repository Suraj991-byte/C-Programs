#include<stdio.h>
int main()
{
    int i,j,k,n;



    printf("Enter number of rows :");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(k=i;k<n;k++)
            printf(" ");

        for(j=0;j<=i;j++)
            printf("%c",'A'+i);
        printf("\n");
    }
}
