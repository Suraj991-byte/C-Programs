#include<stdio.h>
int main()
{
    int n,i,j,temp,key;
    printf("Enter a size of array :");
    scanf("%d",&n);
    int a[n];

    printf("\nEnter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter number for search:");
    scanf("%d",&key);
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
            cnt++;
    }
    if(cnt)
      printf("%d is present %d times!",key,cnt);
    else
      printf("%d is not present!",key);
    getch();

}

