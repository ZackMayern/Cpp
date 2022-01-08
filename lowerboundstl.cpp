/*The first line of the input contains the number of integers N. The next line contains N integers in sorted order. The next line contains Q, the number of queries. Then Q lines follow 
each containing a single integer .

Note: If the same number is present multiple times, you have to print the first index at which it occurs. Also, the input is such that you always have an answer for each query.

For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based) it is present separated by a space.
If the number is not present you have to print "No" (without the quotes) followed by the index of the next smallest number just greater than that number.
You have to output each query in a new line.*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int q;
    int y;
    
    cin >> n;
    vector<int> v;
    for (int i=0; i<n; i++){
        int numstring;
        cin >> numstring;
        v.push_back(numstring);
    }
    
    cin >> q;
    for (int j=0; j<q; j++){
        cin >> y;
        vector<int>::iterator low = lower_bound(v.begin() , v.end(), y);
        if (v[low - v.begin()] == y){
            cout << "Yes" << " " <<  (low - v.begin() + 1) << endl;
        }
        else{
            cout << "No" << " " << (low - v.begin() + 1) << endl;
        }
    }
    return 0;
}