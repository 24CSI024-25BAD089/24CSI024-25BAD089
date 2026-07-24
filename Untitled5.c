#include <stdio.h>
int main()
{
    int n, k;
    int arr[100];
    int i, j;
    int max;
    printf("Enter the number of elements and window size: ");
    scanf("%d %d", &n, &k);
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];
        for(j = i + 1; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }
    return 0;
}
