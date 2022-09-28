// https://practice.geeksforgeeks.org/problems/count-digits5716/1
#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int N){
    int x=N;
    int count=0;
    while(x){
        int i=x%10;
        if(i!=0 && N%i==0)
            count++;
        x=x/10;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int result=evenlyDivides(n);

    cout << result;
}