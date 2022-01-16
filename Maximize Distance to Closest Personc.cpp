//Maximize Distance to Closest Person.cpp
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        vector<int>left(n,0);
        int prev = -1;
        for(int i=0;i<n;i++){
            
            if(seats[i]==1){
                    prev = i;
                }
            left[i] = (i-prev);
            if(prev==-1){
                left[i]=n;
                
            }
        }
        prev = n;
        for(int i=n-1;i>=0;i--){
            
            if(seats[i]==1){
                prev = i;
            }
            if(prev!=n){
                left[i]= min(left[i],(prev-i));
            }
           
        }
        int ans =0;
        for(int i=0;i<n;i++){
            ans = max(ans,left[i]);
        }
        return ans;
    }
};