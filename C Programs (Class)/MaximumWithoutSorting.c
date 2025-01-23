//This code is for finding second maximum number in array

#include<stdio.h>
int main()
{
    int a[10],i,max,n,loc;

    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            loc=i;
        }
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i]&&loc!=i)
            max=a[i];
    }
    printf("Maximum is %d",max);

}
