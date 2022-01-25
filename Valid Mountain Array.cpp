//Valid Mountain Array
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
     
        
        int n = arr.size();
        if(n<3){
            return false;
        }
        int prev = arr[0];
        int i=1;
        while(i<n && arr[i]>prev){
           
            prev = arr[i];
             i++;
        }
       if(i==1||i==n){
           return false;
       }
        while(i<n && arr[i]<prev){
            prev = arr[i];
            i++;
        }
        return i==n;
    }
};