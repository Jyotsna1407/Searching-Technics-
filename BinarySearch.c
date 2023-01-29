#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,key,mid,l=0,r;
    printf("\n enter the number of array \n");
    scanf("%d",&n);
    printf("enter the array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the searching element:\n");
    scanf("%d",&key);
    r=n-1;
    mid=(l+r)/2;
    while(l<=r)
    {
        if(key>a[mid])
        {
            l=mid+1;
        }
        else if(key==a[mid])
        {
            printf("%d is found at %d",key,mid+1);
            break;
        }
        else
        r=mid-1;
        mid=(l+r)/2;
        
        
        }
    }

