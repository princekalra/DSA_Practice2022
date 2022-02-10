//Subarray Sum Equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int sol = 0;
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]);
            sol+=(mp[sum-k]);
            if(sum==k){
                sol++;
            }
            mp[sum]+=1;
        }
        return sol;
    }
};