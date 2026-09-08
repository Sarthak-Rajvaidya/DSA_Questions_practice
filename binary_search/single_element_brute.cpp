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

    unordered_map<int,int>freq;

    for(int i =0;i<n;i++){
        freq[arr[i]]++;
    }

    for(auto x : freq){
        if(x.second == 1){
            cout<<x.first<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}