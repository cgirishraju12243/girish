#include<stdio.h>
void main()
{

    /*
    Pointer is a variable which stores the address of another variable
    */
    int a=10;
    //pointer
    int *ptr=&a;

    printf("a = %d\n",a);
    printf("ptr = %d\n",ptr);
    //To retrieve the value present at the address in a pointer
    printf("ptr value = %d\n",*ptr);

    a=6;
    printf("a = %d\n",a);
    *ptr=8;
    printf("a = %d\n",a);

    printf("ptr = %d\n",++(ptr));
    printf("ptr value = %d\n",*ptr);
    printf("ptr = %d\n",ptr);

    int arr[]={10,20,30,40,50};// int arr[5];

    //pointer to an array
    int *ptr1=arr;

    //normal traversal
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //pointer traversal
    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr1);
        ptr1++;
    }
}
