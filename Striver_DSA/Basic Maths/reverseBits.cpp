// https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
#include <bits/stdc++.h>
using namespace std;

long long reversedBits(long long n){
    int binary[32]={0};
    int count=0;

    while(n!=0){
        binary[31-count]=n%2;
        count++;
        n=n/2;
    }
    reverse(binary, binary+32);
    long long a=0;
    for(int i=0; i<32; i++){
        long long result=pow(2, 31-i);
        a=a+(result*binary[i]);
    }
    return a;
}

int main(){
    long long n;
    cin >> n;
    long long reversedBinary=reversedBits(n);
    
    cout << reversedBinary;
}