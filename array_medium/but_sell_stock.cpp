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

    int maxprofit = 0;

    

    for(int i =0;i<n;i++){
        
        
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[i]){
                maxprofit=max(maxprofit,arr[j]-arr[i]);
            }
        }

        

    }

    cout<<maxprofit<<endl;

    return 0;

}