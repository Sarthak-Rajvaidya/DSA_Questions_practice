#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long totalhours(vector<int>& piles, int k) {
    long long hrs = 0;

    for(int pile : piles) {
        hrs += (pile + k - 1) / k;
    }

    return hrs;
}

int main() {

    int n;
    cin >> n;

    vector<int> piles(n);

    for(int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    int h;
    cin >> h;

    int maxpiles = *max_element(piles.begin(), piles.end());

    for(int k = 1; k <= maxpiles; k++) {

        long long hrs = totalhours(piles, k);

        if(hrs <= h) {
            cout << k << endl;
            return 0;
        }
    }

    return 0;
}