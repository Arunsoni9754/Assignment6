#include<stdio.h>
int main()
{
    int digit,ans=0,n;
    printf("Enter the number to be reversed:");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
    }
    printf("Reverse number is %d",ans);

}
