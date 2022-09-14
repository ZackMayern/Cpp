/*The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each. Each query consists of two integers y and x where y is the type of the 
query and x is an integer. 
For queries of type 3 print "Yes" (without quotes) if the number x is present in the set and if the number is not present, then print "No" (without quotes).
Each query of type 3 should be printed in a new line.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n, query, input;
    set<int> s;
    set<int>::iterator iter;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> query >> input;
        if(query == 1){
            s.insert(input);
        }
        else if(query == 2){
            s.erase(input);
        }
        else if(query == 3){
            iter = s.find(input);
            if (iter != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            return 0;
        }
    }
    return 0;
}