#include<stdio.h>
int main()
{
    int a[100],i,n1,n2,n,j,k,u=0,b[100],uni[200],intersection[100],in=0;

    printf("Enter the size of array1:");
    scanf("%d",&n1);
    printf("\nEnter %d elements for array1:\n",n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the size of array2:");
    scanf("%d",&n2);
    printf("\nEnter %d elements for array2:\n",n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n1-1;k++)
                a[k]=a[k+1];
                n1--;
                j--;
            }
        }

    }
     for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(b[i]==b[j])
            {
                for(k=j;k<n2-1;k++)
                b[k]=b[k+1];
                n2--;
                j--;
            }
        }

    }


    for(i=0;i<n1;i++,u++)
        uni[u]=a[i];


    for(i=0;i<n2;i++,u++)
        uni[u]=b[i];




    for(i=0;i<n1;i++)
    {
        for(j=n1;j<u;j++)
        {
          if(uni[k]=uni[k+1]);
           {
            for(k=0;k<u;k++)
                uni[k]=uni[k+1];
            intersection[in]=uni[i];
            in++;
            u--;
          }
        }
    }

     printf("\n");
    printf("Union is: \n");

    for(i=0;i<u;i++)
        printf("%d ",uni[i]);

    printf("\nIntersection is:\n");
    for(i=0;i<in;i++)
        printf("%d ",intersection[i]);

}








