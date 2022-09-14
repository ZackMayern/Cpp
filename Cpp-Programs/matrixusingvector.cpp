#include<bits/stdc++.h>
using namespace std;

int main(){
                                //rows         //cols   //val
    vector<vector<int>> matrix(12, vector<int>(10,      -1));
    vector<vector<vector<int>>> d3(10, vector<vector<int>>(10, vector<int>(10, -5)));

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0;i<d3.size();i++)
        for(int j=0;j<d3[0].size();j++)
            for(int k=0;k<d3[0][0].size();k++)
                    cout<<d3[i][j][k]<<"\t";
        
    


    return 0;
}