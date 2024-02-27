//Code to convert entire string to upper or lower as specified by user WITHOUT USING LIBRARAY FUNCTIONS
#include <stdio.h>
int main() {
    char s[10];
    int c,i=0;

    printf("Enter 1 for lower to upper and enter 0 for upper to lower\n");
    scanf("%d", &c);

    printf("Input strings\n");
    scanf("%s", s);
    while (s[i] != '\0') {
        if (c == 1) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        } else if (c == 0) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
        i++;
    }

    printf("After conversion %s\n", s);

    return 0;
}
