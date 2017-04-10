class Solution {

public:

    int romanToInt(string s) {

        if(s.substr(0,2) == "IV")

            return 4 + romanToInt(s.substr(2));

        if(s.substr(0,2) == "IX")

            return 9 + romanToInt(s.substr(2));

        if(s.substr(0,2) == "XL")

            return 40 + romanToInt(s.substr(2));

        if(s.substr(0,2) == "XC")

            return 90 + romanToInt(s.substr(2));

        if(s.substr(0,2) == "CD")

            return 400 + romanToInt(s.substr(2));

        if(s.substr(0,2) == "CM")

            return 900 + romanToInt(s.substr(2));

        if(s.substr(0,1) == "C")

            return 100 + romanToInt(s.substr(1));

        if(s.substr(0,1) == "D")

            return 500 + romanToInt(s.substr(1));

        if(s.substr(0,1) == "M")

            return 1000 + romanToInt(s.substr(1));

        if(s.substr(0,1) == "L")

            return 50 + romanToInt(s.substr(1));

        if(s.substr(0,1) == "X")

            return 10 + romanToInt(s.substr(1));

        if(s.substr(0,1) == "V")

            return 5 + romanToInt(s.substr(1));

        if(s.substr(0,1) == "I")

            return 1 + romanToInt(s.substr(1));

        else    

            return 0;

        

    }

};
