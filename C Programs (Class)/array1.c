#include<stdio.h>
int main()
{
    int a[100],n,i,j,cnt;

    printf("Enter a size of array :");
    scanf("%d",&n);
    printf("\nEnter %d elements:\n",n);
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
            }
        }

        printf("\n%d : %d",a[i],cnt);
    }

    return 0;

}
