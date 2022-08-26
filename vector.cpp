#include<bits/stdc++.h>
using namespace std;

//print vector
void printvector(vector<int> &a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}

void sorted(vector<int> &v){
    sort(v.begin(), v.end());
}


int main(){

    vector<int> b(10, -1);
    b[9]=10;

    vector<int> a;
    
    a.push_back(14);
    a.push_back(13);
    a.push_back(-50);
    a.push_back(-900);    
    a.push_back(1000);

    printvector(a);

    a.pop_back();

    printvector(a);

    printvector(b);

    sorted(a);

    printvector(a);

    
    for(int i:a) cout<<i<<" ";



    return 0;
}