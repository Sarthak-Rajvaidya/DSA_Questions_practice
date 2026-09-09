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

    for(int i =0;i<n;i++){
        if((i==0 || arr[i-1]<arr[i]) && (i == n-1 || arr[i]>arr[i+1]) ){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}