#include<stdio.h>
int main()
{
    int max,min,n,a[100],i;
    printf("Enter a size of  array :");
    scanf("%d",&n);
    printf("\nEnter %d elements :\n",n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
      min=a[0];

    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];

    }
    printf("\nMaximum is :%d",max);
    printf("\nMinimum is :%d",min);
}
