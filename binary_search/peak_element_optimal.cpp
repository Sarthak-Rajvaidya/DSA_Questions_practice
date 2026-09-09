#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int low = 0;
    int high = n-1;

    while(low<high){
        int mid = (low+high)/2;

        if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }

    cout<<low<<endl;
    return 0;


}
