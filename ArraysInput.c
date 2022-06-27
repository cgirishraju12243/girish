#include<stdio.h>
void main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
