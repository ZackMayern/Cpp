#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums){
    int n=nums.size();
    int count=0, ele;
    for(int i=0; i<n; i++){
        if(count==0)
            ele=nums[i];
        if(ele==nums[i])
            count++;
        else
            count--;
    }
    return ele;
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

    int result = majorityElement(nums);

    cout << result;
}