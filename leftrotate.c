// Left rotate an array by k positions
#include <stdio.h>

void reverse_array(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[5];
    printf("Enter 5 elements:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int n = 5;
    int k;

    printf("Enter number of elements to rotate:\n");
    scanf("%d", &k);

    
    k = k % n;

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    reverse_array(arr, 0, k - 1);
    reverse_array(arr, k, n - 1);
    reverse_array(arr, 0, n - 1);

    printf("\nArray after left rotation by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
