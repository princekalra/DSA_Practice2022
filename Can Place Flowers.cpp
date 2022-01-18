//Can Place Flowers
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev = -2;
        int len = flowerbed.size();
        int cnt =0;
        for(int i=0;i<len;i++){
            if(flowerbed[i]==0){
                if((i-prev)>1){
                    prev = i;
                    cnt++;
                }
            }
            else{
                if((i-prev)<=1){
                    cnt--;
                }
                prev = i;
            }
        }
        return cnt>=n;
    }
};