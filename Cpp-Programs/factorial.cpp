#include <bits/stdc++.h>

using namespace std;

double factorial(double num){
    double result = 1;
    if(num==0)
        result = 1;

    for(double i=num; i>0; i--)
        result*=i;
    
    return result;
}

int main(){
    double num;

    cout << "Enter the number: " << endl;
    cin >> num;

    cout << "The factorial of the given input number is: " << endl;
    double output = factorial(num);

    cout << output;
}