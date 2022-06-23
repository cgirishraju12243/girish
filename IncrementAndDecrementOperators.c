#include<stdio.h>
void main()
{
    /*
    increment operator --->  ++
    decrement operator --->  --
    Types
    1. prefix
    2. postfix
    */

    int a=10;
    a++; // a = a + 1;
    printf("%d\n",a);

    a--; // a = a - 1;
    printf("%d\n",a);


    int b=5;
    //prefix increment
    printf("b = %d\n",++b);//b=6
    printf("b = %d\n",b);

    //prefix
    int c= a + ++b;//b=7
    printf("c = %d\n",c);

    //postfix
    c = a + b++;//b=8
    printf("c = %d",c);


}
