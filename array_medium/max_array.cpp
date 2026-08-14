//solving using kadane algorithm

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i  =0;i<n;i++){
        cin>>arr[i];
    }

    int currsum  = 0;
    int maxsum = INT16_MIN;

    for(int i =0;i<n;i++){
        currsum+=arr[i];

        maxsum=max(maxsum,currsum);

        if(currsum<0){
            currsum = 0;
        }
    }
    cout<<maxsum;
    return 0;
    
}