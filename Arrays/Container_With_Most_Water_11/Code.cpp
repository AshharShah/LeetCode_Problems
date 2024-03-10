class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVolume = 0;
        int j = height.size() - 1;
        int i = 0;

        int h, currentVolume;

        while(i <= j){
            h = min(height[i], height[j]);
            currentVolume = h * (j-i);

            if(currentVolume > maxVolume){
                maxVolume = currentVolume;
            }

            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxVolume;
    }
};
