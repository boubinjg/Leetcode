class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int jewels = 0;
        for(auto i = S.begin(); i != S.end(); i++)
            for(auto j = J.begin(); j != J.end(); j++)
                if(*i == *j) {
                    ++jewels;
                    break;
                }
        return jewels;
    }
};
