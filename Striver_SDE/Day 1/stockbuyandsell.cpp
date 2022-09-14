#include<bits/stdc++.h>

using namespace std;

// int maxProfit(vector<int> arr){
//     int leftPointer = 0, rightPointer = 1;
//     int maxProfit = 0;

//     while(rightPointer<arr.size()){
//         if(arr[leftPointer]<arr[rightPointer]){
//             int profit = arr[rightPointer]-arr[leftPointer];
//             maxProfit = max(maxProfit, profit);
//         }
//         else
//             leftPointer = rightPointer;
//         rightPointer++;
//     }
//     return maxProfit;
// }

int maxProfit(vector<int> arr){
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for(int index=0; index<arr.size(); index++){
        minPrice = min(minPrice, arr[index]);
        maxProfit = max(maxProfit, arr[index]-minPrice);
    }
    return maxProfit;
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

    int result = maxProfit(arr);
    cout << result;
}