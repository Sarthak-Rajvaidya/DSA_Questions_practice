#include <iostream>
#include <vector>
using namespace std;

int main() {



    int n;
    cin >> n;

    if (n == 0) {
        cout << "NO";
        return 0;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }

    if (count <= 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}