#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int s,l;
    s = n - 1;
    l = 1;

    for (int i = 0; i < n * 2 - 1; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        for (int j = 1; j <= l; j++) {
            if (i % 2 == 0) {
                printf("#");
            } else {
                printf("-");
            }
        }

        if (i < n - 1) {
            s--;
            l += 2;
        } else {
            s++;
            l -= 2;
        }

        printf("\n");
    }

    return 0;
}
