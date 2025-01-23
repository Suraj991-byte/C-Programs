#include<stdio.h>
int main()
{
    int i,key,flag,n;
    printf("Enter a size of array :");
    scanf("%d",&n);
    int a[n];

    printf("\nEnter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter a number for search:");
    scanf("%d",&key);

    flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
          flag=1;
    }

    if(flag)
        printf("Found!");
    else
        printf("Not Found!");
}
