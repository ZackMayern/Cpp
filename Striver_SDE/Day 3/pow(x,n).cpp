#include<bits/stdc++.h>

using namespace std;

double myPow(double x, int n){
    double result=1.0;
    long exp = n;
    if(exp<0)
        exp=abs(exp);
    while(exp>0){
        if(exp%2==0){
            x=x*x;
            exp/=2;
        }
        else{
            result = result*x;
            exp-=1;
        }
    }
    if(n<0)
        result = 1/result;
    
    return result;
}

int main(){
    double x;
    int n;
    cin >> x;
    cin >> n;

    double result = myPow(x,n);
    cout << result;

    return 0;
}