#include <stdio.h>
struct Array {
    int a[100], n;
};

void display(struct Array arr) {
    for(int i = 0; i < arr.n; i++)
        printf("%d ", arr.a[i]);
}

int linearSearch(struct Array arr, int key) {
    for(int i = 0; i < arr.n; i++)
        if(arr.a[i] == key)
            return i;
    return -1;
}

int binarySearch(struct Array arr, int key) {
    int low = 0, high = arr.n - 1, mid;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr.a[mid] == key) return mid;
        if(key < arr.a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    struct Array arr;
    int key;

    printf("Enter size: ");
    scanf("%d", &arr.n);

    printf("Enter sorted elements: ");
    for(int i = 0; i < arr.n; i++)
        scanf("%d", &arr.a[i]);

    display(arr);

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    printf("Linear Search Index: %d\n", linearSearch(arr, key));
    printf("Binary Search Index: %d\n", binarySearch(arr, key));

    return 0;
}
