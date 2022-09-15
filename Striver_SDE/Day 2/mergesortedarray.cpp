#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    for(int i=m; i<m+n; i++)
        nums1.push_back(nums2[i-m]);
    sort(nums1.begin(), nums1.end());
}

int main(){
    int m,n;
    vector<int> nums1, nums2;
    cin >> m;
    cin >> n;

    for(int i=0; i<m; i++){
        int ele;
        cin >> ele;
        nums1.push_back(ele);
    }
    for(int j=0; j<n; j++){
        int ele;
        cin >> ele;
        nums2.push_back(ele);
    }

    merge(nums1,m,nums2,n);

    for(int index=0; index<m+n; index++)
        cout << nums1[index] << " ";
}