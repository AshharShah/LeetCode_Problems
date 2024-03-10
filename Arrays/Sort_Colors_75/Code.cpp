class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> elems;
        elems.push_back(0);
        elems.push_back(0);
        elems.push_back(0);
        int size = nums.size();

        for(int i = 0; i < size; i++){
            elems[nums[i]]++;
        }

        for(int i = 0; i < elems[0]; i++){
            nums[i] = 0;
        }
        for(int i = elems[0]; i < elems[1] + elems[0]; i++){
            nums[i] = 1;
        }
        for(int i = elems[1] + elems[0]; i < size; i++){
            nums[i] = 2;
        }
    }
};
