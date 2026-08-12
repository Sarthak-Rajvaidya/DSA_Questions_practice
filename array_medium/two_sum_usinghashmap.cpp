// using hashmap for two sum so time complexity will get reduced 

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    int n;
    cin>>n;

    int target;
    cin>>target;

    vector<int>arr(n);

    for(int i =0;i<n;i++){
        cin>>arr[i];

    }

    unordered_map<int,int>mpp;

    for(int i =0;i<n;i++){
        int needed = target - arr[i];

        if(mpp.find(needed) != mpp.end()){
            cout<<mpp[needed]<<" "<<i;
        }

        mpp[arr[i]] = i;
    }

    return 0;
}