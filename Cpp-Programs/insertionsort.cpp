#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>& arr, int n){
    int i, key, j;
    for(int i=1; i<n; i++){
        int key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
}

void printVector(vector<int> a, int size){
    for(int i=0; i<size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main(){
    vector<int> arr;
    int n, ele;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ele;
        arr.push_back(ele);
    }

    insertionSort(arr,n);

    printVector(arr,n);
}