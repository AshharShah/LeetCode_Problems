class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int min = abs(nums[0]);
        int min2 = abs(nums[0]);
        int index = 0;
        int index2 = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= min && nums[i] >= 0){
                min = abs(nums[i]);
                index = i;
            }
            if(abs(nums[i]) <= min2 && nums[i] <= 0){
                min2 = abs(nums[i]);
                index2 = i;
            }
        }

        if(min == min2){
            return nums[index];
        }

        if(min < min2){
            return nums[index];
        }
        else{
            return nums[index2];
        }
    }
};
