 //Burst Baloon
 int findMinArrowShots(vector<vector<int>>& points) {
         int n = points.size();
        int cnt = 1;
        if(n==0){
            return 0;
        }
       
        sort(points.begin(),points.end(),[](vector<int>&v1,vector<int>&v2){
            return v1[1]<v2[1];
        });
       int mn = points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]>mn){
                mn = points[i][1];
                cnt++;
            }
        }
        return cnt;
    }