// take as a example array = [2,2,1,1,1,2,2] 
// Majority element elemenet is that is >n/2 times

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

    for(int i  =0;i<n;i++){
        int count = 0;

        for(int j  =0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count>n/2){
            cout<<arr[i];
            return 0;
        }
    }

    return 0;
}