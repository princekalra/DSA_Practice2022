//Sequential Digits
class Solution {
public:
    void helper(vector<int>&sol,int low,int high,int num,int prev){
        if(num>high){
            return;
        }
        if(num>=low && num<= high){
           
            sol.push_back(num);
        }
        if(prev>=9){
            return;
        }
         helper( sol,low,high,num*10 + (prev+1),prev+1);
    }
    vector<int> sequentialDigits(int low, int high) {
     vector<int>sol;
        for(int i=1;i<=9;i++){
             helper(sol,low,high,i,i);
        }
        sort(sol.begin(),sol.end());
       
        return sol;
    }
};