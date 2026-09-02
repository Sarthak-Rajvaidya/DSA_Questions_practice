#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, pair<int, int>> mpp;

    for (int i = 0; i < n; i++) {
        if (mpp.find(arr[i]) == mpp.end()) {
            mpp[arr[i]] = {i, i};
        }
        else {
            mpp[arr[i]].second = i;
        }
    }

    if (mpp.find(target) != mpp.end()) {
        cout << mpp[target].first << " "
             << mpp[target].second << endl;
    }
    else {
        cout << -1 << " " << -1 << endl;
    }

    return 0;
}