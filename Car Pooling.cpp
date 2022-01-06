//Car Pooling
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
     vector<pair<int,int> >vec1;
        vector< pair<int,int> >vec2;
        int n = trips.size();
        int i=0;
        int j=0;
        int ans=0;
        int mx = 0;
        for(int i=0;i<n;i++){
            vec1.push_back(make_pair(trips[i][1],trips[i][0]));
              vec2.push_back(make_pair(trips[i][2],trips[i][0]));
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        while(i<n&&j<n){
            if(vec2[j].first<=vec1[i].first){
                mx-=vec2[j].second;
                j++;
               
            }
            else{
                mx+=vec1[i].second;
                i++;
                  ans = max(ans,mx);
                if(ans>capacity){
                    return false;
                }
            }
           
        }
       // cout<<ans<<endl;
       return true;
    }
};