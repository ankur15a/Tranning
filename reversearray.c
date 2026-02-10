#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    int start = 0, end = n - 1;

    
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }


    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
