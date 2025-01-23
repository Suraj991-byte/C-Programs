#include<stdio.h>
int main()
{
    int n,i,pos,key,a[100];

    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("\nEnter %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nEnter a position:");
    scanf("%d",&pos);

    if(pos>=0&&pos<n+1)
    {
        printf("Enter a element:");
        scanf("%d",&key);
        for(i=n;i>=pos;i--)
            a[i]=a[i-1];
        a[pos-1]=key;
        n++;
         for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    }
    else
        printf("Invalid Position");
}


//Home Work

//sepatate odd and even numbers in array and store in sepatate array and print the data

//display only unique elements means 10,10,20,30,20,40->output=10,20,30,40
