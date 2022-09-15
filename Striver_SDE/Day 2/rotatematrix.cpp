#include <bits/stdc++.h>

using namespace std;

void rotateMatrix(vector<vector<int>>& arr){
    int leftBoundary=0;
    int rightBoundary=arr.size()-1;
    while(leftBoundary<rightBoundary){
        for(int i=0; i<(rightBoundary-leftBoundary); i++){
            int topBoundary=leftBoundary;
            int bottomBoundary=rightBoundary;

            int topLeft = arr[topBoundary][leftBoundary+i];
            arr[topBoundary][leftBoundary+i]=arr[bottomBoundary-i][leftBoundary];
            arr[bottomBoundary-i][leftBoundary]=arr[bottomBoundary][rightBoundary-i];
            arr[bottomBoundary][rightBoundary-i]=arr[topBoundary+i][rightBoundary];
            arr[topBoundary+i][rightBoundary]=topLeft;
        }
        leftBoundary++;
        rightBoundary--;
    }
}

int main(){
    vector<vector<int>> arr;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        arr.push_back(temp);
    }
    cout << endl;
    rotateMatrix(arr);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}