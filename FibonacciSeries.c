#include<stdio.h>
//Fibonacci series --> 1,1,2,3,5,8,13,21,.......
void main()
{
    int n;
    printf("How many numbers you want?\n");
    scanf("%d",&n);
    int fib1=1,fib2=1,fib3;
    printf("%d %d ",fib1,fib2);
    for(int i=2;i<n;i++){
        fib3=fib1+fib2;
        printf("%d ",fib3);
        fib1=fib2;
        fib2=fib3;
    }

    printf("\n==========================\n");
    fib1=1;
    fib2=1;
    printf("%d %d ",fib1,fib2);
    fib3=fib1+fib2;
    while(fib3<=100)
    {
        printf("%d ",fib3);
        fib1=fib2;
        fib2=fib3;
        fib3=fib1+fib2;
    }

}
