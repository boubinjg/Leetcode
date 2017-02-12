#include<vector>
#include<string>
class Solution {
public:
    string convert(string s, int numRows) {
        std::vector<std::string> v(numRows);
        if(numRows <=1)
            return s;
        int index = 0;
        bool inc = true;
        for(auto c : s) {
            v[index] += c;
            if(inc && index + 1 == numRows) {
                inc = false;
            } else if(!inc && !index) {
                inc = true;
            }
            if(inc)
                ++index;
            else
                --index;
        }
        std::string ret;
        for(auto s : v)
            ret += s;
        return ret;
    }
};
