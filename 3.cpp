class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        auto beg = s.begin(), end = s.begin();
        std::map<char, bool> m;
        for(auto c : s) {
            if(std::find(beg, end, c) == end) {
                end++;
            } else {
                end++;
                beg = std::find(beg, end, c) + 1;
            }
            if(end-beg > i)
                i = end-beg;
        }
        return i;
    }
};
