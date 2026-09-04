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
        if(arr[i] == target){
            cout<<"True"<<endl;
            return 0;
        }
        
    }

    cout<<"False"<<endl;
    return 0;
    cout<<-1<<endl;
    return 0;
}