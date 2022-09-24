#include<bits/stdc++.h>

using namespace std;

int maxConsecutiveOnes(vector<int> nums){
    int maxval=0, count=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1)
            count++;
        else{
            maxval=max(maxval, count);
            count=0;
        }
    }
    maxval=max(maxval, count);
    return maxval;
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
    int result=maxConsecutiveOnes(arr);
    cout << result;

    return 0;
}