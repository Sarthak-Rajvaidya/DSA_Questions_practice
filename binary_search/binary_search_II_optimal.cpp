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

    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high) / 2;

        if(arr[mid] == target){
            cout<<"True"<<endl;
            return 0;

        }

        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low++;
            high--;
            return 0;
        }

        if(arr[low]<= arr[mid]){
            if(arr[low]<=target && target < arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid] < target && target<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    cout<<"False"<<endl;
    return 0;
}