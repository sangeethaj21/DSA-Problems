#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter  the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
        
    }
    int *ptr=arr;
    int sum=0;
    for (int i=0;i<n;i++)
    
    {
        sum=sum+*ptr;
        ptr++;
        
    }
    printf("sum:%d\n",sum);
    
    return 0;
}
