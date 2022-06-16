#include<stdio.h>
void main()
{
    int number=0;
    switch(number)
    {
        case 0:
            printf("This is case 0\n");
            break;
        case 1:
            printf("This is case 1\n");
            break;
        case 2:
            printf("This is case 2\n");
            break;
        default:
            printf("This is default\n");
    }

    char letter='b';
    switch(letter)
    {
    case 'a':
        printf("This is letter a\n");
        break;
    case 'b':
        printf("This is letter b\n");
        break;
    case 'c':
        printf("This is letter c\n");
        break;
    default:printf("This is default block");
    }
}
