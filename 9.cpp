class Solution {
public:
    bool isPalindrome(int x) {
        int y = x, bw = 0;
        while(y != 0) {
            bw *= 10;
            bw += y%10;
            y/=10;
        }
        std::cout<<bw<<" "<<x<<std::endl;
        return x == bw && x>=0;
    }
};
