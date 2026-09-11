#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    int low = 1;
    int high = m;

    while(low<=high){
        int mid = low+(high-low)/2;

        int val = 1;
        for(int i =0;i<n;i++){
            val*=mid;
            if(val>m) break;
        }
        if(val  == m){
            cout<<mid<<endl;
            return 0;
        }
        else if(val<m){
            low = mid+1;
        }
        else{
            high = mid-1;
        }




    }

    cout<<-1<<endl;
    return 0;

}