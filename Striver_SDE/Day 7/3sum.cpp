#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for(int index=0; index<nums.size()-2; index++){
        if(index==0 || (index>0 && nums[index]!=nums[index-1])){
            int leftPointer=index+1, rightPointer=nums.size()-1;
            int sum=-nums[index];

            while(leftPointer<rightPointer){
                if(nums[leftPointer]+nums[rightPointer]==sum){
                    vector<int> temp;
                    temp.push_back(nums[index]);
                    temp.push_back(nums[leftPointer]);
                    temp.push_back(nums[rightPointer]);
                    result.push_back(temp);

                    while(leftPointer<rightPointer && nums[leftPointer]==nums[leftPointer+1])
                        leftPointer++;
                    while(leftPointer<rightPointer && nums[rightPointer]==nums[rightPointer-1])
                        rightPointer--;
                    
                    leftPointer++;
                    rightPointer--;
                }
                else if(nums[leftPointer]+nums[rightPointer]>sum)
                    rightPointer--;
                else
                    leftPointer++;
            }
        }
    }
    return result;
}

void printVector(vector<vector<int>> nums){
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[0].size(); j++){
            cout << nums[i][j] << " ";
        }
        cout << "\n";
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

    vector<vector<int>> result=threeSum(arr);
    printVector(result);

    return 0;
}