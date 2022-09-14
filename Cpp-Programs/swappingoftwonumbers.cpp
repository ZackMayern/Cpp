#include <iostream>

using namespace std;

int swapOfTwoNumbers(int,int);

int main(){
    int a,b;
    printf("Enter value for a: \n");
    cin >> a;
    printf("Enter value for b: \n");
    cin >> b;
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);

    swapOfTwoNumbers(a,b);
}

int swapOfTwoNumbers(int a, int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;

    printf("After swapping of two numbers: \n");
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);
}