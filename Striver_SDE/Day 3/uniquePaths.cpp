#include <bits/stdc++.h>

using namespace std;

int uniquePaths(int i, int j, int m, int n){
    if(i==(m-1) && j==(n-1))
        return 1;
    if(i>=m || j>=n)
        return 0;
    else
        return uniquePaths(i+1,j,m,n) + uniquePaths(i,j+1,m,n);
}

int main(){
    int i=0, j=0;
    int m,n;
    cin >> m;
    cin >> n;

    int uniquePath = uniquePaths(i,j,m,n);
    cout << uniquePath;

    return 0;
}