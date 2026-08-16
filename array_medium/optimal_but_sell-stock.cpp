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

    int maxprofit = 0;
    int bestbuy = arr[0];

    for(int i =0;i<n;i++){
        if(arr[i]>bestbuy){
            maxprofit = max(maxprofit,arr[i]-bestbuy);
        }

        bestbuy = min(bestbuy,arr[i]);


    }

    cout<<maxprofit<<endl;

    return 0;
}