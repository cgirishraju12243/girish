#include<stdio.h>
void main()
{
    int arr[]={10,20,30,40,50};

    //traditional way
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);

    printf("====================\n");
    //traversing an array
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}
