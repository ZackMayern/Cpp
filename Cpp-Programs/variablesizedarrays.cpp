/*The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and j 
(an index in the array referenced by a[i]) for a query.*/

#include <vector>
#include <iostream>

using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> a(n);
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        
        a[i].resize(k);
        for(int j=0; j<k; j++){
            cin>>a[i][j];
        }
    }  
    
    //To run queries
    for (int q_num = 0; q_num < q; q_num++){
        int x,y;
        cin>>x>>y;
        cout<<a[x][y]<<endl;
    }
    return 0;
}