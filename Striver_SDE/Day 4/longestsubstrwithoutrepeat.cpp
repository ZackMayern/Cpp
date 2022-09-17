#include<bits/stdc++.h>

using namespace std;

int longestSubstr(string s){
    vector<int> mp(256,-1);
    int maxLength=0, start=-1;
    for(int i=0; i<s.length(); i++){
        if(mp[s[i]]>start)
            start = mp[s[i]];
        mp[s[i]]=i;
        maxLength = max(maxLength, i-start);
    }
    return maxLength;
}

int main(){
    string s;
    cin >> s;

    int result = longestSubstr(s);

    cout << result;

    return 0;
}