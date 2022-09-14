#include <bits/stdc++.h>

using namespace std;

int maxSubArraySum(vector<int> arr){
    int maxSum = arr[0], currentSum = 0;
    for(int i=0; i<arr.size(); i++){
        if(currentSum<0)
            currentSum = 0;
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
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

    int result = maxSubArraySum(arr);
    cout << result;
    return 0;
}