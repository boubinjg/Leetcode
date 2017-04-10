#include<unordered_map>

class Solution {

public:

    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size() < 1)

            return "";

        if(strs.size() < 2)

            return strs[0];

        std::string ret = "";

        for(int i = 0; i<strs[0].size(); i++) {

            for(int j = 0; j<strs.size(); j++) {

                if(strs[j].size() < i || strs[j][i] != strs[0][i])

                    return ret;

            }

            ret += strs[0][i];

        }

        return ret;

    }

};
