#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int low = 1;
    int high = n;
    int ans = 1;

    if(n==0) return 0;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid*mid<=n){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    cout<<ans<<endl;
    return 0;
}