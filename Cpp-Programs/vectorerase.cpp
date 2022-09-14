/*The first line of the input contains an integer N.The next line contains N space separated integers(1-based index).The third line contains a single integer x,
denoting the position of an element that should be removed from the vector.The fourth line contains two integers a and b denoting the range that should be erased from the vector 
inclusive of a and exclusive of b.

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    int o,p;
    vector<int> v;
    cin >> n;
    for (int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    cin >> m;
    v.erase(v.begin()+m-1);
    
    cin >> o >> p;
    v.erase(v.begin()+o-1, v.begin()+p-1);
    
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << ' ';
    }
    
    return 0;
}