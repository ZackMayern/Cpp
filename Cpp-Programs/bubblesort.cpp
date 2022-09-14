#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0 ; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printVector(vector<int> a){
    for(int i=0; i<a.size(); i++)
        cout << a[i] << " ";
    cout <<  endl;
}

int main(){
    vector<int> arr, result;
    int n, ele;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ele;
        arr.push_back(ele);
    }

    bubbleSort(arr, n);

    printVector(arr);
}