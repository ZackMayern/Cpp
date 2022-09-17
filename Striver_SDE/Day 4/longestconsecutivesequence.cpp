#include <bits/stdc++.h>

using namespace std;

int longestConsecutiveSequence(vector<int>& nums){
    unordered_set<int> hashSet;
    for(auto x:nums)
        hashSet.insert(x);

    int longestConsecutive=0;

    for(auto x:nums){
        if(!hashSet.count(x-1)){
            int currentNum=x;
            int currentLongest=1;

            while(hashSet.count(currentNum+1)){
                currentNum+=1;
                currentLongest+=1;
            }
            longestConsecutive=max(longestConsecutive, currentLongest);
        }
    }
    return longestConsecutive;
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
    int result=longestConsecutiveSequence(nums);

    cout << result;

    return result;
}