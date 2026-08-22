#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>nums1(m);
    vector<int>nums2(n);

    for(int i = 0;i<n;i++){
        nums1[m+i] = nums2[i];
    }

    sort(nums1.begin(),nums1.end());

    for(int i = 0;i<n;i++){
        cout<<nums1[i]<<endl;
    }

    return 0;

}