#include<stdio.h>
void main()
{
    int n;
    printf("Enter a  number: ");
    scanf("%d",&n);
    int flag=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}
