//Koko Eating Bananas
class Solution {
public:
    bool check( vector<int>&piles , int h, int k){
       
        long long cnt= 0;
        for(int i=0;i<piles.size();i++){
            cnt+=(piles[i]/k);
            if(piles[i]%k!=0){
                cnt+=1;
            }
            if(cnt>h){
                return false;
            }
        }
        return cnt<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high =0;
        for(int i=0;i<piles.size();i++){
            high = max(high,piles[i]);
        }
       
        int ans;
        while(low<=high){
            int mid = (low+high)>>1;
            if(check(piles,h,mid) ){
                ans = mid;
                high = mid-1;
              
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};