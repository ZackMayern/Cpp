/*Input will contain four integers - a,b,c,d, one per line. Return the greatest of the four integers.*/

#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d) {
    int result;
    if(a>b && a>c && a>d){
        result = a;
    }
    if(b>a && b>c && b>d){
        result = b;
    }
    if(c>a && c>b && c>d){
        result = c;
    }
    if(d>a && d>b && d>c){
        result = d;
    }
    return result;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
