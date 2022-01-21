//Gas Station
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     
        int n = gas.size();
        int count = 0;
        for(int i=0;i<n;i++){
            count+=gas[i];
            count-=cost[i];
        }
        if(count<0){
            return -1;
        }
        count=0;
        int sol = 0;
        for(int i=0;i<n;i++){
            count+=gas[i];
            count-=cost[i];
          
            if(count<0){
                sol = i+1;
                count=0;
            }
        }
        return sol;a
    }
};