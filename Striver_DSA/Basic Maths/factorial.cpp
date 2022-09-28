#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    double result=1;

    for(int i=n; i>0; i--){
        result*=i;
    }
    cout << result;
}