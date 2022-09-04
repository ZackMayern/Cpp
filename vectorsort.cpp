/* The first line of the input contains N where N is the number of integers. The next line contains N integers.
Print the integers in the sorted order one by one in a single line followed by a space. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void print(vector<int> const &a) {
   for(int i=0; i < a.size(); i++)
   cout << a.at(i) << ' ';
}

int main() {
    int n;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    
    print(v);
    
    return 0;
}
