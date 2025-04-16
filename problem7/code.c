#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
if(n>=10000 && n<=99999) {
    int sum = 0;
    int digit;
    int num = n;

    for (int i = 0; i < 5; i++) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("%d", sum);
}

    return 0;
}
