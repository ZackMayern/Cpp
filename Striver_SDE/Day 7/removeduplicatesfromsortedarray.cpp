#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size()==0)
        return 0;
    int l=1;
    for(int r=1; r<nums.size(); r++){
        if(nums[r]!=nums[r-1]){
            nums[l]=nums[r];
            l++;
        }
    }
    return l;
}

void printVector(vector<int> nums, int index){
    for(int i=0; i<index; i++){
        cout << nums[i] << " ";
    }
}

int main(){
    int n;
    vector<int> arr;
    cin >> n;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    sort(arr.begin(), arr.end());
    
    int result=removeDuplicates(arr);
    printVector(arr, result);

    return 0;
}