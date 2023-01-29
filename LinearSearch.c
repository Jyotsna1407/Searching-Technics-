#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,key;
    printf("\n enter the number of array \n");
    scanf("%d",&n);
    printf("enter the array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the searching element:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d is found at %d",key,i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("element is not found");
    }

}