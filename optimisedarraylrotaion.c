#include <stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,j,r,k;
    scanf("%d %d",&n,&r);
    int a[n];
    for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
    }
     int *temp=a+n-1;  
     
     r%=n;
    
    if((n%r)!=0)
    {
        k=n-r-1;
    
        j=n-1;
        
        for(int i=0;i<j;i++)
        {
            (*(temp))^=(*(a+k))^=(*(temp))^=(*(a+k));
             
            k-=r;
            if(k<0)
                {
                    k+=n;
            }
    }
        (*(a+k))=(*(temp));   
    }
    else
        {
         for(int i=0;i<r;i++)
        {
            temp=a+n-1;
            for(j=n-2;j>=0;j--)
                {
                    (*temp)^=(*(a+j))^=(*(temp))^=(*(a+j));
            }
            *(a+n-1)=*(temp);
    }
    }
    
    for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
    }
    return 0;
}
