class Solution {
public:

    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        int ans = high;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            int sum = 0;

            for(int num : nums) {

                sum += (num + mid - 1) / mid;

                // Optional early stopping
                if(sum > threshold)
                    break;
            }

            if(sum <= threshold) {

                // mid is valid
                ans = mid;

                // Try to find a smaller divisor
                high = mid - 1;
            }
            else {

                // mid is too small
                low = mid + 1;
            }
        }

        return ans;
    }
};