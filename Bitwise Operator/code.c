#include <stdio.h>

void maximum_Cal(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int and_val = a & b;
            int or_val = a | b;
            int xor_val = a ^ b;

            if (and_val < k && and_val > max_and)
            {
                max_and = and_val;
                
            }  
            if (or_val < k && or_val > max_or)
            {
                max_or = or_val;
            }
            if (xor_val < k && xor_val > max_xor)
            {
                max_xor = xor_val;
            }
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    maximum_Cal(n, k);

    return 0;
}