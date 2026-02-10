#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 9, 1, 7};
    int n=5;

    int max = arr[0];
    int min = arr[0];

    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    int difference = max - min;

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Difference = %d\n", difference);

    return 0;
}
