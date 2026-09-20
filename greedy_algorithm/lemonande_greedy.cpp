#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int five =0;
    int ten = 0;

    vector<int>bills(n);


    for(int bill : bills){
        if(bill  == 5){
            five++;
        }
        else if(bill == 10){
            if(five == 0){
                return false;
            }
            five--;
            ten++;

        }
        else{
            if(ten >0 && five>0){
                five--;
                ten--;
            }
            else if(five>=3){
                five-=3;
            }
            else{
                return false;

            }
        }
    }

    return true;
}