#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> pascalsTriangle(int rows){
    vector<vector<int>> result;
    for(int i=0; i<rows; i++){
        vector<int> temp(i+1,1);
        for(int j=1; j<i; j++){
            temp[j]=result[i-1][j]+result[i-1][j-1];
        }
        result.push_back(temp);
    }
    return result;
}

void printVector(vector<vector<int>> arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cin >> rows;

    vector<vector<int>> result = pascalsTriangle(rows);
    printVector(result);

    return 0;
}