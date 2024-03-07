class Solution {
public:
    int countGoodSubstrings(string s) {
        int size = s.size();
        if(size < 3){
            return 0;
        }
        int totalSubstrings = 0;
        string substr;
        for(int i = 0; i < size - 2; i++){
            substr =  s.substr(i, 3);
            if(substr[0] != substr[1] && substr[1] != substr[2] && substr[0] != substr[2]){
                totalSubstrings++;
            }
        }
        return totalSubstrings;
    }
};