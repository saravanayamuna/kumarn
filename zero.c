#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a[20],sum=0,ans,temp=0,b=-1;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            sum=sum+a[i];
        }
        else{
            temp=temp+a[i];
        }
    }
   ans=temp*b;
if(sum<ans)
{
    printf("postive number sum is closest to zero\n");
}
else
{
    printf("negative number sum is closest to zero\n");
}
    return 0;
}
