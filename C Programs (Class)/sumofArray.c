#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;

    printf("Enter a size of array :");
    scanf("%d",&n);
    printf("\nEnter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         sum = sum+a[i];
    }
        printf("\nSum is %d",sum);

    return 0;
}
