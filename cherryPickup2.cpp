 int mem[72][72][72];
    int arr[3] = {1,-1,0};
    int getMax(int r,int c1,int c2,int n,int m,vector< vector<int> >&grid,int cfbr){
        if(r==n){
            return 0;
        }
        if(c1>=m||c2>=m||c1<0||c2<0){
            return INT_MIN;
        }
        if(mem[r][c1][c2]!=-1){
            return mem[r][c1][c2];
        }
        int cherry  =0 ;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cherry = max(cherry,getMax(r+1,c1+arr[i],c2+arr[j],n,m,grid,cfbr));
            }
        }
        cherry += (c1==c2)?(grid[r][c1]):(grid[r][c1] + grid[r][c2]);
        mem[r][c1][c2] = cherry;
        return cherry;
        
    }
    int cherryPickup(vector<vector<int>>& grid) {
       int n = grid.size();
        int m = grid[0].size();
        memset(mem,-1,sizeof(mem));
        return getMax(0,0,m-1,n,m,grid,0);
    }
};