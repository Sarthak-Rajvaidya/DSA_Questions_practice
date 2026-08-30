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
    

    for(int i =0;i<n;i++){
        if(arr[i] >=target){
            cout<<i;
            return 0;

        }
    }
    cout<<n;
    return 0;

}
