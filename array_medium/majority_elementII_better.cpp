#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int>mpp;
    vector<int>ans;


    for(int i=0;i<n;i++){
        mpp[arr[i]]++ ;   
    }

    for(auto it : mpp){
        if(it.second > n/3){
            ans.push_back(it.first);
        }
    }

    for(int x:ans){
        cout<<x<<" ";
    }


}