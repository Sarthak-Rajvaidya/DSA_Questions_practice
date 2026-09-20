#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>g(n);
    vector<int>s(n);

    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int i= 0;
    int j = 0;
    int ans = 0;

    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            ans++;
            i++;
            j++;


        }
        else{
            j++;
        }
    }
    return ans;
    
}
