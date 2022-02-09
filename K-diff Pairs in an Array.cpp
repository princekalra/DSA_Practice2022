 //K-diff Pairs in an Array
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]+=1;
        }
        int res = 0;
        for(int i=0;i<n;i++){
            if(k==0){
                if(mp[nums[i]]>=2){
                    res+=1;
                }
              mp[nums[i]]=0;
            }
            else if(mp[nums[i]+k]>=1){
                mp[nums[i]+k]=0;
                res+=1;
            }
        }
        return res;
        
    }
};