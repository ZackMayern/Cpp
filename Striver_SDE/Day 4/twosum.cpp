#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> result;
    unordered_map<int, int> mp;

    for(int i=0; i<nums.size(); i++){
        if(mp.find(target-nums[i])!=mp.end()){
            result.push_back(mp[target-nums[i]]);
            result.push_back(i);
        }
        mp[nums[i]]=i;
    }
    return result;
}

int main(){
    int n, target;
    vector<int> nums;
    cin >> n;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    cin >> target;
    vector<int> result = twoSum(nums, target);

    for(int index=0; index<result.size(); index++)
        cout << result[index] << " ";

    return 0;
}