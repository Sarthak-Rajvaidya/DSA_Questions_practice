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

    int maxlength = 0;

    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum+=arr[j];
            if(sum == 0){
                maxlength = max(maxlength,j-i+1);
            }
        }
    }
    return maxlength;
}