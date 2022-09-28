#include<bits/stdc++.h>
using namespace std;

int sumoffirst(int n){
    if(n==0)
        return n;
    return n+sumoffirst(n-1);
}

int main(){
    int n;
    cin >> n;

    int result=sumoffirst(n);
    cout << result;
}