#include <stdio.h>

int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    int mark = 0;
    int temp = num;

   
    while (temp > 0) {
        mark = (mark >> 1) | 1;
        temp = temp << 1;
    }
    int result = num ^ mark; 

    printf("Mark: %d\n", mark);

    return 0;
}
