#include<stdio.h>
 int main()
 {
    long long int i,n,s,j=1;
    printf("Enter the number whose factorial do you want :");
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        j=j*i;    
    }
    printf("The factorial is %d",j);
 }
