//pairsOfSongs
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>mp;
        mp[0]=0;
        int ans=0;
        int n = time.size();
        for(int i=0;i<n;i++){
            for(int j=60;j<=1000;j+=60){
                ans+=(mp[j-time[i]]);
            }
            mp[time[i]]+=1;
          }
        return ans;
    }
};