// using calloc()

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n;
    int *arr;
    printf("\n Enter the number of elements in array: ");
    scanf("%d",&n);
    arr = (int*)calloc(n, sizeof(int));
    if(arr == NULL)
        exit(1);
    printf("\n Enter the %d values to be stored in array: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n You have entered: ");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    free(arr);
}
