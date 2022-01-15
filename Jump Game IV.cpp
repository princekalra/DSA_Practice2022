//Jump Game IV.cpp
class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,vector<int> >mp;
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i); 
        }
        queue<int>q;
        int steps=0;
        q.push(0);
        visited[0] = true;
       
        while(q.empty()==false){
           int sz = q.size();
            for(int j=0;j<sz;j++){
                int x = q.front();
                q.pop();
                if(x==(n-1)){
                    return steps;
                }
                vector<int>&temp = mp[arr[x]];
                temp.push_back(x-1);
                temp.push_back(x+1);
                for(auto y:temp){
                    if(y>=0 && y<n &&!visited[y]){
                        visited[y]=true;
                        q.push(y);
                    }
                }
                 mp[arr[x]].clear();
            }
           steps++;
        }
        
        return steps;
    }
};