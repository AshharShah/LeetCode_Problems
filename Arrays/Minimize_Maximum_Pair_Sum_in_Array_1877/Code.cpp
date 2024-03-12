class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int minSum = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j = n - 1;
        for(int i = 0; i < n/2; i++){
            minSum = max(nums[i] + nums[j], minSum);
            j--;
        }
        return minSum;
    }
};
