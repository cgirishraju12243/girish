#include<stdio.h>
void main()
{
   int a=10;
   int b=5;
   display();
   printf("Hello\n");

   int c=addition(a,b);//parameters
   printf("c=%d",c);


}
void display()
{
    printf("Hi\n");
}
int addition(int a,int b)//arguments
{
    int sum=a+b;
    return sum;
}

