// Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xors = 0;
        for(int i=0;i<n;i++){
            xors^=nums[i];
        }
        return xors;
        
    }
};