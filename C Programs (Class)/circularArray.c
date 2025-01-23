#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int i,j,n=5,temp,k;

   /* printf("Enter a size of array:");
    scanf("%d",&n);

    printf("\nEnter %d elements:\n",);*/
    for(i=0;i<n;i++)
    {

temp=a[0];

        for(j=i;j<n-1;j++)
        {
           a[i]=a[i+1];
        }

        a[i+1]=temp;
        printf("\n");
        printf("%d ",a[i]);
       for(j=0;j<n;j++)
        printf("%d ",a[j]);
    }

   getch();
}
