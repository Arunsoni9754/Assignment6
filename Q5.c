#include<stdio.h>
 int main()
 {
    int i,n,s=0;
    printf("ENter the number upto which you want to sum:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         s=s+(i*i*i);
    }
    printf("The sum is %d",s);
 }
