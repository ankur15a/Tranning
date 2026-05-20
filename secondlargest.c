#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {-99,25,65,85};
    int n = sizeof(arr) 
    / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    if(n==1){
        printf(" There is No second largest element\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("No second largest element\n");
    else
        printf("Second largest number is: %d\n", secondLargest);

    return 0;
}
