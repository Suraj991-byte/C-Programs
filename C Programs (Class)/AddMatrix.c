#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],add[100][100];
    int r1,r2,c1,c2,i,j;

    printf("Enter a row for 1st matrix:");
    scanf("%d",&r1);
    printf("Enter a column for 1st matrix:");
    scanf("%d",&c1);
    printf("Enter elements for Matrix 1:\n");

    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        scanf("%d",&a[i][j]);

    printf("\nEnter a row for 2nd matrix:");
    scanf("%d",&r2);
    printf("Enter a column for 2nd matrix:");
    scanf("%d",&c2);
    printf("Enter elements for Matrix 2:\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        scanf("%d",&b[i][j]);

    if(r1==r2&&c1==c2)
    {
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                add[i][j]=a[i][j]+b[i][j];

        printf("\nAddition is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                printf("%3d",add[i][j]);
            printf("\n");
        }
    }
    else
        printf("Addition is NOT Possible!!");

    getch();

}
