#include<iostream>
#include<vector>
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

    int left = 0;
    int right = n-1;
    int sum = arr[left] + arr[right];

    while(left<right)
    {
        if(sum == target){
            cout<<arr[left] << " "<<arr[right];
            return 0;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;

        }

    }

    return 0;
    
}