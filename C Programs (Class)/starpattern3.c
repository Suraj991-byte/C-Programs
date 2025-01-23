#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter a number of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",i);
        printf("\n");
    }
    getch();

}
/*

Home Work
1
12
123
1234
12345
123456


#
##
#*#
#**#
#***#
#****#
*/
