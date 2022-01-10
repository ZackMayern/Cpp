//The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each. The first integer, type of each query is the type of the query. If query is of 
//type 1, it consists of one string and an integer X and Y where X is the name of the student and Y is the marks of the student. If query is of type 2 or 3, it consists of a single string X where X 
// is the name of the student. 

//For queries of type  print the marks of the given student.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string,int>m;
    int n;
    cin>>n;
    
    while(n-->0){
        int cmd;
        string name;
        cin>>cmd>>name;  
              
        if(cmd==1){
            pair<map<string,int>::iterator,bool> ret;
            int score;
            cin>>score;
            ret = m.insert(std::pair<string,int>(name,score));
            
            if(ret.second == false){
                ret.first->second = ret.first->second + score;
            }
        }
        
        else if(cmd==2){
            m.erase(name);
        }
        
        else if(cmd==3){
            cout<<m[name]<<endl;
        }
    }
    return 0;
}
