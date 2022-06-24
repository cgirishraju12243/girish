#include<stdio.h>
void main()
{
    /*
    123 ---> 3
    12 --->  32
    1 ---> 321
    */

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i,rev=0;
    while(n!=0)
    {
       int rem=n%10;
       rev = rev * 10 + rem;
       n = n/10;
    }
    printf("%d ",rev);
}
