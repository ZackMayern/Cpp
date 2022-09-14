#include <bits/stdc++.h>

using namespace std;

void setMatrixZero(vector<vector<int>>& arr){
    int column0 = 1, rows = arr.size(), columns = arr[0].size();
    for(int i=0; i<rows; i++){
        if(arr[i][0]==0)
            column0 = 0;
        for(int j=1; j<columns; j++)
            if(arr[i][j]==0)
                arr[i][0]=arr[0][j]=0;
    }
    for(int i=rows-1; i>=0; i--){
        for(int j=columns-1; j>=1; j--)
            if(arr[i][0]==0 || arr[0][j]==0)
                arr[i][j]=0;
        if(column0==0)
            arr[i][0]=0;
    }
}

void printVector(vector<vector<int>> arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> arr;
    int row, column;
    cin >> row;
    cin >> column;
    for(int i=0; i<row; i++){
        vector<int> temp;
        for(int j=0; j<column; j++){
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        arr.push_back(temp);
    }
    setMatrixZero(arr);
    cout << endl;
    printVector(arr);
    return 0;
}