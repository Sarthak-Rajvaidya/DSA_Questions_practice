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

    vector<int>ans(n);

    int posidx = 0;
    int negidx = 1;

    for(int i =0 ;i<n ;i++){
        if(arr[i]>0){

            ans[posidx] = arr[i];
            posidx+=2;

        }
        else{
            ans[negidx] = arr[i];
            negidx+=2;
        }
    }

    for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}