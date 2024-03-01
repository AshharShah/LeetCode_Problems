class Solution {
public:
    bool isPowerOfTwo(int n) {
        if((n % 2 == 0 && n/2 == 1) || n == 1){
            return true;
        }
        else if(n % 2 != 0 || n == 0){
            return false;
        }

        bool x = isPowerOfTwo(n/2);

        return x;
    }
};
