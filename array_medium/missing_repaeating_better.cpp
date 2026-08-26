// Solving by considering freq

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

    vector<int>freq(n+1,0);

    for(int x:arr){
        freq[x]++;
    }

    int repeating = -1;
    int missing = -1;

    for(int i =1;i<=n;i++){
        if(freq[i] == 2){
            repeating=i;
        }
        if(freq[i] == 0){
            missing=i;
        }

    }
    for(int  i =0;i<n;i++){
        cout<<{missing,repeating}<<" ";
    }
}