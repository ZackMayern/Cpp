#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
    vector<vector<int>> result;
    if(intervals.size()==0)
        return result;
    
    sort(intervals.begin(), intervals.end());
    vector<int> temp = intervals[0];

    for(auto x:intervals){
        if(x[0]<=temp[1])
            temp[1]=max(x[1], temp[1]);
        else{
            result.push_back(temp);
            temp = x;
        }
    }
    result.push_back(temp);
    return result;
}

int main(){
    vector<vector<int>> intervals;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<2; j++){
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        intervals.push_back(temp);
    }

    vector<vector<int>> result = merge(intervals);

    cout << endl;

    for(int i=0; i<result.size(); i++){
        for(int j=0; j<2; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}