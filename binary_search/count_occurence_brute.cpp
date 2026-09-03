#include<iostream>
#include<vector>
#include<algorithm>
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

    unordered_map<int,int>freq;

    for(int i =0;i<n;i++){
        if(arr[i] == target){
            freq[target]++;
        }
    }
    cout<<freq[target];


}