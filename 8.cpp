class Solution {
public:
    int myAtoi(string str) {
        int index = 0;
        long long ret = 0;
        bool minus = false;
        for(int i = 0; i<str.length() && isspace(str[i]); ++i)
                index++;
        if(str[index] == '+')
            index++;
        else if(str[index] == '-') {
            minus = true;
            index++;
        }
        int sindex = index;
        for(; index<str.size() && isdigit(str[index]); ++index) {
            ret *= 10;
            ret += str[index]-'0';
        }
        if(minus) ret*=-1;
        if(ret < INT_MIN || (index-sindex > 10 && minus) )
            ret = INT_MIN;
        if(ret > INT_MAX || (index-sindex > 10 && !minus))
            ret = INT_MAX;
        return ret;
    }
};
