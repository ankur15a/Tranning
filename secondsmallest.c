#include <stdio.h>
#include <limits.h>

int main() {
    int a[5] = {6, 2, 0, 4, 1};

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for(int i = 0; i < 5; i++) {

        if(a[i] < smallest) {
            second_smallest = smallest;
            smallest = a[i];
        }
        else if(a[i] > smallest && a[i] < second_smallest) {
            second_smallest = a[i];
        }
    }

    printf("Second smallest number = %d", second_smallest);

    return 0;
}
