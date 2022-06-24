#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int rev=0,temp=n;
    while(n!=0)
    {
        int rem=n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    if(temp==rev)
        printf("palindrome");
    else
        printf("Not a palindrome");
}
