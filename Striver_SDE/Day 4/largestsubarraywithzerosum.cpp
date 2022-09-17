#include <bits/stdc++.h>

using namespace std;

int largestSubArrayWithZeroSum(vector<int>& nums, int n){
    unordered_map<int,int> mp;
    int maxLength=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=nums[i];
        if(sum==0)
            maxLength=i+1;
        else{
            if(mp.find(sum)!=mp.end()){
                maxLength=max(maxLength, i-mp[sum]);
            }
            else
                mp[sum]=i;
        }
    }
    return maxLength;
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
    int result=largestSubArrayWithZeroSum(nums,n);

    cout << result;

    return result;
}