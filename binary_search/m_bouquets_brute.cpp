#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int possible(int day , vector<int>&bloomday,int k){
    int bouquet = 0;
    int cnt = 0;

    for(int flower:bloomday){
        if(flower<=day){
            cnt++;
        }
        if(cnt==k){
            bouquet++;
            cnt =0;
        }
        else{
            cnt = 0;
        }
    }
    return bouquet;
}



int main(){
    int n;
    cin>>n;
    int m,k;
    cin>>m>>k;

    vector<int>bloomday(n);
    for(int i =0;i<n;i++){
        cin>>bloomday[i];
    }

    int low = *min_element(bloomday.begin(),bloomday.end());
    int high = *max_element(bloomday.begin(),bloomday.end());

    for(int day = low; day<=high;day++){
        int bouquet = possible(day,bloomday,k);
        if(bouquet>=m){
            return day;
        }
    }
    return -1;
    


}
