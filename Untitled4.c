#include <stdio.h>
int main()
{
    int n, p;
    int arr[100];
    int i;
    int start = 0;
    int end;
    int sum = 0;
    int max = 0;
    int size;
    printf("Enter the number of elements and limit: ");
    scanf("%d %d", &n, &p);
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(end = 0; end < n; end++)
    {
        sum = sum + arr[end];
        while(sum > p)
        {
            sum = sum - arr[start];
            start = start + 1;
        }
        size = end - start + 1;
        if(size > max)
        {
            max = size;
        }
    }
    printf("Max Length: %d", max);
    return 0;
}

