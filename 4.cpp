class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> v(nums1.size() + nums2.size());
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v.begin());
        if(v.size()%2)
            return v[v.size()/2];
        else
            return (static_cast<double>(v[v.size()/2 - 1]) + v[v.size()/2])/2;
    }
};

