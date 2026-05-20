#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "abc";
    int n = strlen(s);
    char temp;
for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp = s[(i+j) % n];
            printf("%c",temp);

        }
   
 printf("\n");
    }
 return 0;
}