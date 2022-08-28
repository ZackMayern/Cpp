#include <bits/stdc++.h>

using namespace std;

bool palindrome(string text, int n){
    bool flag = true;
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    for(int i=0; i<n; i++)
        if(text[i]!=text[n-i-1]){
            flag = false;
            break;
        }
    
    if(flag)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}

int main(){
    string text;

    cout << "Enter the string: " << endl;
    cin >> text;

    int n = text.size();

    palindrome(text, n);

    return 0;
}