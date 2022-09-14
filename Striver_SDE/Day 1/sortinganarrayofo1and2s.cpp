#include <bits/stdc++.h>

using namespace std;

void sortingArray(vector<int>& nums){
    int lowPointer = 0, midPointer = 0, highPointer = nums.size()-1;

    while(midPointer<=highPointer){
        if(nums[midPointer]==0)
            swap(nums[lowPointer++], nums[midPointer++]);
        
        else if(nums[midPointer]==1)
            midPointer++;
        
        else
            swap(nums[midPointer], nums[highPointer--]);
        }
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
    sortingArray(nums);
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
}