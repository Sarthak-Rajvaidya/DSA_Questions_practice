#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long totalhours(vector<int>&piles,int k){
    long long hours = 0;

    for(int pile:piles){
        hours += (pile+k-1)/k;
    }
    return hours;

}


int main(){
    int n;
    cin>>n;
    int h;
    cin>>h;
    vector<int>piles(n);
    for(int i = 0;i<n;i++){
        cin>>piles[i];
    }

    int low = 1;
    int high = *max_element(piles.begin(),piles.end());
    int ans = high;

    while(low<=high){
        int mid =  low + (high-low)/2;

        long long hours = totalhours(piles,mid);

        if(hours<=h){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }

    }
    return ans;

}