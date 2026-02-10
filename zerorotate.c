#include <stdio.h>

int main() {
    int arr[9] = {2, 0, 3, 0, 4};
    int n = 5;
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    while (j < n) {
        arr[j] = 0;
        j++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
