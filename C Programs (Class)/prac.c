int main()
{
    int n;
    int a[100],i,j,temp;

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("\nEnter %d elements in array:",n);
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        temp=a[n-1];
        for(j=n;j>=0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
        printf("\n");

        for(j=0;j<n;j++)
            printf("%d ",a[j]);
    }
}
