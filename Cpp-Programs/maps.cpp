#include<bits/stdc++.h>
using namespace std;

void printmapp(unordered_map<int, int> &mp){

    for(auto i:mp){
        cout<<i.first<<" ";
        cout<<i.second<<" ";
        cout<<endl;
    }
    cout<<endl;
}

void printmap(unordered_map<int, int> &mp){
    for(auto it = mp.begin(); it!=mp.end();it++){
    cout<<it->first<<" ";
    cout<<it->second<<" ";
    cout<<endl;
    }
    cout<<endl;
}

int main(){

    //dictionaries

    //time complexity
    // unordered_map access - O(1)
    // ordererd_map access - O(log(N))

    unordered_map<int, int> mp;   //1->2, 2->7, -1->8
    mp[1]=2;
    mp[2]=7;
    mp[-1]=8;

    printmap(mp);

    mp[0]=12;
    mp[2]=8;

    printmapp(mp);

    


    return 0;
}