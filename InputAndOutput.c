#include<stdio.h>
void main()
{
    /*
    Format Specifiers:
    1. int - %d
    2. float - %f
    3. double - %lf
    4. char - %c
    5. string - %s
    */

    printf("Hello World 10!\n");

    int number=7;
    printf("Integer number : %d\n",number);

    number=67;
    printf("%d\n",number);


    int number2;

    number2=53;
    printf("%d\n",number2);

    float number3=1.23;
    printf("%f\n",number3);

    double number4=22.56789;
    printf("%lf\n",number4);

    char letter='s';
    printf("%c\n",letter);
}
