#include <stdio.h>
#include <stdlib.h>  

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int minDist = (abs(i - (n - 1)) > abs(j - (n - 1))) ? abs(i - (n - 1)) : abs(j - (n - 1));
            printf("%d ", minDist + 1);
        }
        printf("\n");
    }

    return 0;
}