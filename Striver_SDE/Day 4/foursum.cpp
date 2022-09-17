#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target){
    vector<vector<int>> result;
    if(nums.empty())
        return result;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i=0; i<n-3; i++){
        for(int j=i+1; j<n-2; j++){
            long target2=target-nums[i]-nums[j];

            int leftPointer=j+1;
            int rightPointer=n-1;

            while(leftPointer<rightPointer){
                int twoSum=nums[leftPointer]+nums[rightPointer];
                if(twoSum<target2)
                    leftPointer++;
                else if(twoSum>target2)
                    rightPointer--;
                else{
                    vector<int> quad(4,0);
                    quad[0]=nums[i];
                    quad[1]=nums[j];
                    quad[2]=nums[leftPointer];
                    quad[3]=nums[rightPointer];
                    result.push_back(quad);

                    while(leftPointer<rightPointer && nums[leftPointer]==quad[2])
                        leftPointer++;
                    while(leftPointer<rightPointer && nums[rightPointer]==quad[3])
                        rightPointer--;
                }
            }
            while(j<n-2 && nums[j+1]==nums[j])
                j++;
        }
        while(i<n-3 && nums[i+1]==nums[i])
            i++;
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
    vector<vector<int>> result = fourSum(nums, target);

    for(int i=0; i<result.size(); i++){
        cout << "[";
        for(int j=0; j<result[0].size(); j++){
            cout << result[i][j];
        }
        cout << " ] ";
    }

    return 0;
}