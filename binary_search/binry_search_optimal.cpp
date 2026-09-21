//Using proper binary search soln now :- approch 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;

    vector<int>arr(n);

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int low = 0;
    int high = n-1;

    for(int i =0;i<n;i++){
        int mid = (low+high)/2;

        if(arr[mid] == target) return mid;

        else if(target > arr[mid]) low = mid+1;
        else high = mid-1;


    }
}