// https://leetcode.com/problems/palindrome-number/
#include<bits/stdc++.h>
using namespace std;

// bool isPalindrome(int n){
//     if(n<0)
//         return false;
//     long long int x=n,rev=0;
//     while(x){
//         rev=rev*10+x%10;
//         x=x/10;
//     }
//     return rev==n;
// }

bool isPalindrome(int n){
    string s1=to_string(n);
    string s2=s1;
    reverse(s2.begin(), s2.end());

    return s1==s2;
}

int main(){
    int n;
    cin >> n;

    bool flag=isPalindrome(n);
    if(flag)
        cout << "true";
    else
        cout << "false";
}