 Find the Town Judge
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>outgoing(n+1,0);
        vector<int>incoming(n+1,0);
        for(int i=0;i<trust.size();i++){
            outgoing[trust[i][0]]+=1;
            incoming[trust[i][1]]+=1;
        }
        
        for(int i=1;i<=n;i++){
            if(outgoing[i]==0&&incoming[i]==(n-1)){
                return i;
            }
        }
        return -1;
    }
};