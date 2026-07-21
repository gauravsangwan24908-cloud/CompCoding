class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();

        int left = k;
        int right = k;

        int mini = nums[k];
        int ans = mini;

        while (left > 0 || right < n - 1) {

            // Expand toward the larger neighbour
            if (left == 0) {
                right++;
            }
            else if (right == n - 1) {
                left--;
            }
            else if (nums[left - 1] < nums[right + 1]) {
                right++;
            }
            else {
                left--;
            }

            mini = min(mini, min(nums[left], nums[right]));

            ans = max(ans, mini * (right - left + 1));
        }

        return ans;
    }
};