class Solution {
public:
    int reverse(int x) {
        std::string s = std::to_string(x);
        std::reverse(s.begin(), s.end());
        try{
            return (x>=0) ? std::stoi(s) : -1 * std::stoi(s);
        } catch(exception e) {
            return 0;
        }
    }
};
