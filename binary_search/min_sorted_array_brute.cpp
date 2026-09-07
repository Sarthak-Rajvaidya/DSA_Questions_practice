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

    int minel = arr[0];

    for(int i =1;i<n;i++){
        if(minel > arr[i]){
            minel = arr[i];
        }
    }
    cout<<minel<<endl;
    return 0;
}