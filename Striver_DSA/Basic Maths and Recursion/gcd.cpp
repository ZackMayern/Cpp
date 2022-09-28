#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(log(baseof1.61)min(a,b))
// int gcd(int a, int b){
//     if(b==0)
//         return a;
//     return gcd(b, a%b);
// }

int gcd(int a, int b){
    int result;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 &&  b%i==0)
            result=i;
    }
    return result;
}

int main(){
    int a,b;
    cin >> a;
    cin >> b;

    int result=gcd(a,b);
    cout << result;
}