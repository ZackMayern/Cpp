#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> a){
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
}

vector<int> vectorSearch(vector<int> a, vector<int> b){
    vector<int> result;
    bool flag = false;

    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(b[j]==a[i]){
                result.push_back(i);
                break;
            }
            else
                flag = true;
        }
    }
    if(flag)
        result.push_back(-1);
    return result;
}
int main(){
    vector<int> array, v, result;
    int n, elements;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the elements in the array: " << endl;
    for(int i=0; i<n; i++){
        cin >> elements;
        array.push_back(elements);
    }

    cout << "The input array is: " << endl;
    printVector(array);
    cout << "\n\n";

    int x = pow(10,9);
    for(int i=1; i<=x; i=i*2){
        int k = i;
        v.push_back(k);
    }

    cout << "The vector of power of 2 is: " << endl;
    printVector(v);
    cout << "\n\n";

    result = vectorSearch(array, v);

    printVector(result);
}