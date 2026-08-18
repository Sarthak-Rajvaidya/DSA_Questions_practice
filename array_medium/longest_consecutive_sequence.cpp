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

    

    if(arr.empty()){
        return 0;
    }

    sort(arr.begin(),arr.end());

    int longest = 1;
    int current = 1;

    for(int i =1;i<n;i++){
        if(arr[i] == arr[i-1]+1){
            current++;
        }
        else if(arr[i] == arr[i-1]){
            continue;

        }
        else{
            current = 1;
        }
        longest = max(longest,current);
    }
    cout<<longest;


}