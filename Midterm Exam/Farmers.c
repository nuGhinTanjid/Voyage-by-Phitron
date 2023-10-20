#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);


    for(int i=0; i<testcase; i++) 
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int totalWork = M1 * D;
        int newTime = totalWork / (M1 + M2);
        int days= D - newTime;

        printf("%d\n", days);
    }

    return 0;
}
