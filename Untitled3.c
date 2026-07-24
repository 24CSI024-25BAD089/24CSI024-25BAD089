#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int i;
    int total = 0;
    int current = 0;
    int max;
    int swaps;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the binary array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            total++;
        }
    }
    if(total == 0)
    {
        printf("Min Swaps: 0");
        return 0;
    }
    if(total == 1)
    {
        printf("Min Swaps: 0");
        return 0;
    }
    for(i = 0; i < total; i++)
    {
        if(arr[i] == 1)
        {
            current++;
        }
    }
    max = current;
    for(i = total; i < n; i++)
    {
        if(arr[i] == 1)
        {
            current++;
        }
        if(arr[i - total] == 1)
        {
            current--;
        }
        if(current > max)
        {
            max = current;
        }
    }
    swaps = total - max;
    printf("Min Swaps: %d", swaps);
    return 0;
}
