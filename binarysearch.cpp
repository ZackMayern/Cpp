#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr, int size, int target){
    int start = 0, end = size-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]>target)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}

int main(){
    int n, k, ele;
    vector<int> arr;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ele;
        arr.push_back(ele);
    }
    cin >> k;

    int result = binarySearch(arr, n, k);

    cout << result;
}