#include<stdio.h>
#include<stdbool.h>
void main()
{
    int a=25;
    //if else syntax
    if(a<5)
    {
        printf("Hi This is true\n");
    }
    else
    {
        printf("Hello This is false\n");
    }

    //if elseif
    if(a<20)
    {
        printf("a is less than 20\n");
    }
    else if(a<10)
    {
        printf("a is less than 10\n");
    }
    else if(a<5)
    {
        printf("a is less than 20\n");
    }
    else
    {
        printf("we can't say");
    }
}
