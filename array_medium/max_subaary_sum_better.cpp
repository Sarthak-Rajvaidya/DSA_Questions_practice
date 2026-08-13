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

    int maxsum = INT16_MIN;

    for(int i  =0;i<n;i++){
        int sum = 0;

        for(int j = i;j<n;j++){
            sum += arr[j];
            maxsum = max(maxsum,sum);
        }
    }

    cout<<maxsum;
}