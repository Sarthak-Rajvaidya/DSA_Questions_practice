#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>


using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int,int>>ans;

    sort(arr.begin(),arr.end());

    ans.push_back(arr[0]);

    for(int i = 1;i<n;i++){
        if(arr[i][0] <= ans.back()[1] ){
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
        }
        else{

            ans.push_back(arr[i]);

        }


    }

    for(int x: ans){
        cout<<x<<" ";
    }





}