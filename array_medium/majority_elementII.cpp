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

    vector<int>ans;

    for(int i =0;i<n;i++){
        int count = 0;

        for(int j = 0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            } 
        }
        if(count>n/3){
            if(ans.empty() || arr[0]!=arr[i]){
                ans.push_back(arr[i]);
            }
        }
    }

    for(int x:ans){
        cout<<x<<" ";
    }
}