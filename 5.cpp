class Solution {
public:
    std::string countPal(std::string& s, std::string::iterator posB, std::string::iterator posE) {
        int size = 0;
        while(posB - size >= s.begin() && posE + size < s.end()) {
            ++size;
            if(*(posE+size) != *(posB-size))
                break;
        }
        --size;
        return string(posB - size, posE+size+1);
    }
    string longestPalindrome(string s) {
        int palLength = 0;
        string palString, curString;
        
        for(auto pos = s.begin(); pos != s.end(); ++pos) {
            curString = countPal(s, pos, pos);
            if(curString.size() >= palLength) {
                palLength = curString.size();
                palString = curString;
            }
            if(*pos == *(pos+1)) {
                curString = countPal(s, pos, pos+1);
                if(curString.size() >= palLength) {
                    palLength = curString.size();
                    palString = curString;
                }
            }
        }
        return palString;
    }
};

