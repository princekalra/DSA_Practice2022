// Subsets
class Solution {
public:
    void helper(vector<int>&nums,int i,vector<int>&v,vector< vector<int> >&sol){
        if(i>=(nums.size())){
            sol.push_back(v);
            return;
        }
        helper(nums,i+1,v,sol);
        v.push_back(nums[i]);
        helper(nums,i+1,v,sol);
        v.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector< vector<int> >sol;
        vector<int>v;
        helper(nums,0,v,sol);
        return sol;
    }
};