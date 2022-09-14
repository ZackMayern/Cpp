/*The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and b contains their absoluted difference.
a' = a+b
b' = |a-b|*/

#include <iostream>
#include <cmath>

void update(float *a,float *b) {
    float sum = *a + *b;
    
    float diff = *a - *b;
    float difference = abs(diff);
    *a = sum;
    *b = difference;
}

int main() {
    float a, b;
    
    scanf("%f %f", &a, &b);
    update(&a, &b);
    printf("%f\n%f", a, b);

    return 0;
}