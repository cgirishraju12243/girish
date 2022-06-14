#include<stdio.h>

void main()
{
    /*
    multi-line comments
    1.line
    2.line
    3.line
    */
    int a=10; // 4 bytes
    short int b=5; // 2 bytes
    long int c=1454445; // 8 bytes

    float d=15.76; // 4 bytes

    double g=124.34564; // 8 bytes
    long double h=1241874.3487634; // 16 bytes

    char letter='r'; // 1 byte

    /*
    Variable declaration rules
    1. variable name should start with an alphabet or underscore(_)
    2. variable name may contain digits
    */

    //valid
    int number=6;
    int number123=7;
    int number_123=87;
    int number_5432=98;
    int _number=987;

    //invalid
    int 8number=98;




}
