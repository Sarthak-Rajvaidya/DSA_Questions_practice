#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int power(int base,int expo){
    int result = 1;
    for(int i =0;i<expo;i++){
        result*=base;

    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    
    for(int i =1;i<m;i++){
        int val = power(i,n);
        if(val == m){
            cout<<i<<endl;
            return 0;
        }
        if(val>m){
            break;
        }





    }
    cout<<-1<<endl;
    return 0;
        
    
}
