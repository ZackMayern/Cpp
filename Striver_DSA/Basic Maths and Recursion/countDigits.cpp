#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count;
    cin >> n;
    
    // Time Complexity O(n)
    // while(n){
    //     n=n/10;
    //     count++;
    // }
    // cout << count;

    // Time Complexity O(1)
    string s=to_string(n);
    cout << s.length();
}