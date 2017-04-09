class Solution {

public:

    int maxArea(vector<int>& height) {

        int max = 0, left = 0, right = height.size()-1;

        while(left < right) {

            int localMax = (right-left)*min(height[left], height[right]);

            if(localMax > max)

                max = localMax;

            if(height[right] > height[left])

                left++;

            else

                right--;

        }

        return max;

    }

};
