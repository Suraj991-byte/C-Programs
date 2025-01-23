#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c;

    printf("Enter a Row:");
    scanf("%d",&r);

    printf("\nEnter a Column:");
    scanf("%d",&c);

    printf("\nEnter elements\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
           scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
           printf("%3d",a[i][j]);
        printf("\n");
    }
}
