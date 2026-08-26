// this is brute force
#include<iostream>
#include<vector>
#include<algorithm>

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

    int ans = -1;

    for(int i =0;i<n;i++){
        if(arr[i] == target){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
