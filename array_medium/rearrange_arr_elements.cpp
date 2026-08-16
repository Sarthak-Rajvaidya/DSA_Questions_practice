#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>pos;
    vector<int>neg;

    for(int i =0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }

        
        }

        vector<int>ans;

        for(int i =0;i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);

        
    }

    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;


    

    
}