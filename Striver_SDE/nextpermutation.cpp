#include<bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int>& arr){
    int n = arr.size(), k, l;
    for(k=n-2; k>=0; k--){
        if(arr[k]<arr[k+1])
            break;
    }
    if(k<0)
        reverse(arr.begin(), arr.end());
    else{
        for(l=n-1; l>k; l--){
            if(nums[l]>nums[k])
                break;
        }    
        swap(nums[k], nums[l]);
        reverse(nums.begin()+k+1, nums.end());
    }
    swap(arr[k], arr[l]);
    reverse(arr.begin()+k+1, arr.end());
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    nextPermutation(arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}