https://leetcode.com/problems/divide-array-into-equal-pairs/?envType=daily-question&envId=2025-03-17


class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
        }

        for(auto it:mpp){
            if(it.second%2!=0) return false;
        }
    return true; }
};
