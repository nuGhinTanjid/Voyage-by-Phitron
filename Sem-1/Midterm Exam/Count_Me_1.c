#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    int two = 0, three = 0;

    for (int j = 0; j < n; j++) {
        scanf("%d", &arr[j]);
    }

    for (int j = 0; j < n; j++) {
    if (arr[j] % 2 == 0 || (arr[j] % 3 == 0 && arr[j] % 2 == 0)) 
        {
            two++;
        }
         else if (arr[j] % 3 == 0) 
        {
            three++;
        }
    }

    printf("%d %d\n", two, three);
    return 0;
}
