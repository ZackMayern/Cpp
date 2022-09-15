#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int>& nums){
    int n = nums.size();
    vector<int> mp(n,0);
    int result;
    for(int i=0; i<n; i++)
        mp[nums[i]]++;
    for(int i=0; i<mp.size(); i++)
        if(mp[i]>1)
            result=i;
    
    return result;
}

int main(){
    int n;
    vector<int> nums;
    cin >> n;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    int result = findDuplicate(nums);

    cout << result;
}