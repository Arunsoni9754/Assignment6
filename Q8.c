#include<stdio.h>
int main()
{
    int i,j,k,l=0;
    printf("ENter the number:");
    scanf("%d",&i);
    for(j=2;j<i/2;j++)
    {
        
        if(i%j==0)
        {
            l=1;
            break;
        }
    }
         if(l==0)
            printf("Prime number");
        else
        printf("Non Prime Number");
    
}
