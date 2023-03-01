#include <stdio.h>

int main()
{
    int arr[100];
    int i, n, sum=0;
  
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("\nEnter %d elements in the array: \n", n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter %d element in the array: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum of all elements of array = %d \n", sum);

    return 0;
}
