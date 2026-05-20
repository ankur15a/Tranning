#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abccabca";
    char sub[] = "ca";
    int flag = 0;
    int i;

    for (i = 0; i <= strlen(str) - strlen(sub); i++) {
        int j = 0;

        while (j < strlen(sub) && str[i + j] == sub[j]) {
            j++;
        }

        if (j == strlen(sub)) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("substring found at index %d", i);
    } else {
        printf("substring not found");
    }

    return 0;
}