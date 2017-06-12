class Solution {

public:

    vector<vector<int>> threeSum(vector<int>& nums, int pos ,vector<int> cur, map<std::vector<int>, bool>& rv) {

        if(cur.size() >= 3){

            int t = 0;

            for(auto i : cur)

                t += i;

            if(!t) {

                rv[cur] = true;

            }

        }

        else {

            for(int i = pos+1; i<nums.size(); i++){

                std::vector<int> ret = cur;

                ret.push_back(nums[i]);

                threeSum(nums, i, ret, rv);

            }

        }

        return {{}};

    }

    vector<vector<int>> threeSum(vector<int>& nums) {

        map<vector<int>, bool> rv;

        vector<vector<int>> ret;

        std::sort(nums.begin(), nums.end());

        threeSum(nums, -1, {}, rv);

        for(auto val : rv){

            ret.push_back(val.first);

        }

        return ret;

    }

};
