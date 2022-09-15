#include<bits/stdc++.h>

using namespace std;

int missingAndRepeating(vector<int>& arr, int n){
    int result;
    vector<int> mp(n,0);
    for(int i=0; i<n; i++)
        mp[arr[i]]++;
    for(int i=0; i<mp.size(); i++)
        if(mp[i]>1)
            result=i;
    return result;
}

int main(){
    int testCase, n;
    vector<int> arr;
    cin >> testCase;
    cin >> n;

    for(int i=0; i<testCase; i++){
        for(int j=0; j<n; j++){
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        int result = missingAndRepeating(arr, n);
        cout << result;
    }
    return 0;
}