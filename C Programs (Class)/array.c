#include<stdio.h>
int main()
{
    int a[100],n,i;

    printf("Enter a size of array :");
    scanf("%d",&n);
    printf("\nEnter %d elements:\n",n);
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        printf("\n%d",a[i]);

    return 0;
}
