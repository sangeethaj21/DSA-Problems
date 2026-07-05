#include <stdio.h>

int main()
{
    int a[]={1,2,3,5,7};
    int *ptr=a;//it indicates the first arry element
    int  max=*ptr;//it indicates the first element as the maximum element (assume) 
    for(int i=1;i<5;i++)
    {
        ptr++;
        if(*ptr>max)
        {
            max=*ptr;
        
        }
        
    }
    printf("maximum %d",max);
    
    return 0;
}
