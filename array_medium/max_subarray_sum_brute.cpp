// here we will generate maxium subarray sum using brute force approch by generating all subaarays 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    

    for(int i  =0;i<n;i++){
        cin>>arr[i];
    }

    int maxsum = INT16_MIN;

    for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){
            int sum  =0;

            for(int k = i;k<=j;k++){
                sum+=arr[k];
            }
            maxsum = max(maxsum,sum);
        }
    }
    cout<<maxsum;

    return 0;
}