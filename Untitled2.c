	#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int sum[100];
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum[0] = arr[0];

    for(i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }
    printf("Cumulative sum array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}
