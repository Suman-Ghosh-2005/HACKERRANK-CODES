#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    
    int largest=a;
    if(b > largest)
    {
        largest = b;
    }
    if (c > largest) {
        largest =c; 
    }
    if (d > largest) {
         largest =d;
    }
    return largest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}