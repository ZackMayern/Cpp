#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int sum = *a + *b;
    
    int diff = *a - *b;
    int difference = abs(diff);
    *a = sum;
    *b = difference;
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}