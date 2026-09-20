#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int f(int i,vector<int>&g,vector<int>&s,vector<bool>&used){
    if(i == g.size()) return 0;

    int ans = 0 ;

    for(int j = 0;j<s.size();j++){
        if(!used[j] && s[j]>=g[i]){
            used[j] = true;

            ans = max(ans,1+f(i+1,g,s,used));
            used[j] = false;
        }
    }
    ans = max(ans,f(i+1,g,s,used));
    return ans;

}

int main(){
    int n;
    cin>>n;
    

    vector<int>g(n);
    vector<int>s(n);

    vector<bool> used(s.size(), false);

    return f(0,g,s,used)

}