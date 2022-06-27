#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter values for a and b:\n");
    scanf("%d%d",&a,&b);
    char operation;
    scanf(" %c",&operation);
    switch(operation)
    {
        case '+':
            printf("Addition is %d",addition(a,b));
            break;
        case '-':
            printf("Subtraction is %d",subraction(a,b));
            break;
        case '*':
            printf("Multiplication is %d",multiplication(a,b));
            break;
        case '/':
            printf("Division is %d",division(a,b));
            break;
        case '%':
            printf("Modulus is %d",modulus(a,b));
            break;
        default:printf("Invalid operation");
    }

}
int addition(int a,int b)
{
    return a+b;
}
int subraction(int a,int b)
{
    return a-b;
}
int multiplication(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    return a/b;
}
int modulus(int a,int b)
{
    return a%b;
}
