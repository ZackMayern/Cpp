#include<bits/stdc++.h>
using namespace std;

double factorial(double n){
    if(n<=1)
        return n;
    return n*factorial(n-1);
}

int main(){
    double n;
    cin >> n;

    double result=factorial(n);
    cout << result;
}