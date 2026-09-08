#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int low = 0;
    int high = n-1;

    while(low<high){
        int mid = (low+high)/2;

        if(mid % 2 ==1){
            mid--;
        }
        if(arr[mid] == arr[mid+1]){
            low = mid+2;
            
        }
        else{
            high = mid;
        }
    }
    cout<<arr[low]<<endl;
    return 0;
}