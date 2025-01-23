#include<stdio.h>
int main()
{
    int key,i,j,n,a[100];
    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter a number to delete:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            for(j=i;j<n-1;j++)
                a[j]=a[j+1];
            n--;
            i--;
            //break;
        }
    }

    for(i=0;i<n;i++)
        printf("\n%d  ",a[i]);


}
