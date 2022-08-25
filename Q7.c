#include<stdio.h>
int main()
{
    int i,n,j=0;
    printf("Enter the number:-");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        {j++;}
    }
    
    printf("The digits are %d",j);

}
