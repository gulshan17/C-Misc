
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    
    int n,r;
    scanf("%d %d",&n,&r);
    int a[n],b[n];
    for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
    }
    
    while(r>n)
    {
        r-=n;
    }
    
    for(int i=r;i<n;i++)
        {
           b[i-r]=a[i];
    }
    for(int i=0;i<r;i++)
        {
            b[n-r+i]=a[i];
    }
    for(int i=0;i<n;i++)
        {
           printf("%d ",b[i]);
    }
    
    return 0;
}
