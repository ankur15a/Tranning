#include <stdio.h>

int main() {
    int arr[6] = {2, 3, 2, 5, 2, 6};
    int n = 6;
    int X = 2;

    int count = 0;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == X)
            count++;
    }

    printf("%d occurs %d times\n", X, count);

    return 0;
}
