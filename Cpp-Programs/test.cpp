#include <bits/stdc++.h>

using namespace std;

vector<string> longestCommonPrefix(vector<string>& strs){
    string ans;
    sort(strs.begin(),strs.end());
    // for(int i=0;i<strs[0].size();i++) {
    //     if(strs[0][i] != strs[strs.size()-1][i]) {
    //         return ans;
    //     }
    //     ans += strs[0][i];
    // } 
    return strs;
}

void printVector(vector<string> s){
    for(int i=0; i<s.size(); i++)
        cout << s[i] << " ";
}

int main(){
    int n;
    vector<string> strs;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        strs.push_back(s);
    }

    longestCommonPrefix(strs);
    printVector(strs);
    // int result = longestCommonPrefix(strs);
    //cout << result;

    return 0;
}