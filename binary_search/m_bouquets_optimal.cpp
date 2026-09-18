class Solution {
public:

    int possible(int day, vector<int>& bloomDay, int k) {

        int bouquets = 0;
        int count = 0;

        for(int flower : bloomDay) {

            if(flower <= day) {
                count++;

                if(count == k) {
                    bouquets++;
                    count = 0;
                }
            }
            else {
                count = 0;
            }
        }

        return bouquets;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        // Impossible to make m bouquets
        if(1LL * m * k > bloomDay.size()) {
            return -1;
        }

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            int bouquets = possible(mid, bloomDay, k);

            if(bouquets >= m) {

                // mid is a valid day
                ans = mid;

                // Try to find an earlier day
                high = mid - 1;
            }
            else {

                // mid is too early
                low = mid + 1;
            }
        }

        return ans;
    }
};