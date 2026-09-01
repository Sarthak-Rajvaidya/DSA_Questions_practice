#include <iostream>
#include <vector>

using namespace std;

int floorValue(vector<int>& nums, int x) {
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] <= x) {
            ans = nums[mid];
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int ceilValue(vector<int>& nums, int x) {
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= x) {
            ans = nums[mid];
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    int x;
    cin >> x;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int findFloor = floorValue(nums, x);
    int findCeil = ceilValue(nums, x);

    cout << "Floor: " << findFloor << endl;
    cout << "Ceil: " << findCeil << endl;

    return 0;
}