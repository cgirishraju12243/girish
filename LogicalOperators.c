#include<stdio.h>
void main()
{
    /*
    Logical Operators:

    1. Logical And(&&)
    2. Logical OR(||)
    3. Logical Not(!)
    */

    int number=10;

    if(number>5 && number<15)
        printf("This is logical and");

    if(number>5 || number<15)
        printf("This is logical or");

    if(!(number<0))
        printf("This is logical not");
}
