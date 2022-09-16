#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int m=matrix.size(), n=matrix[0].size();
    int start=0, end=(m*n)-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(matrix[mid/n][mid%n]==target)
            return true;
        else if(matrix[mid/n][mid%n]>target)
            end=mid-1;
        else
            start=mid+1;
    }
    return false;
}

int main(){
    vector<vector<int>> matrix;
    int m,n, target;
    cin >> m;
    cin >> n;
    for(int i=0; i<m; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        matrix.push_back(temp);
    }
    
    cin >> target;
    bool flag = searchMatrix(matrix, target);
    if(flag)
        cout << "true";
    else
        cout << "false";

    return 0;
}