#include<iostream>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int threshold;
    cin>>threshold;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int maxi = *max_element(arr.begin(),arr.end());
    for(int divi = 1;divi<=maxi;divi++){
        int sum = 0;
        for(int i =0;i<n;i++){
            int result = (arr[i]+divi-1)/divi;
            sum+=result;
        }
        if(sum<=threshold){
            cout<<divi<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;


    
    

}