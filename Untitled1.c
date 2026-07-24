#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int result[100];
    int left, right, index;
    int leftValue, rightValue;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    left = 0;
    right = n - 1;
    index = n - 1;
    while(left <= right)
    {
        leftValue = arr[left];
        if(leftValue < 0)
        {
            leftValue = -leftValue;
        }
        rightValue = arr[right];
        if(rightValue < 0)
        {
            rightValue = -rightValue;
        }
        if(leftValue > rightValue)
        {
            result[index] = arr[left] * arr[left];
            left++;
        }
        else
        {
            result[index] = arr[right] * arr[right];
            right--;
        }
  index--;
    }
    printf("Sorted squared array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}

