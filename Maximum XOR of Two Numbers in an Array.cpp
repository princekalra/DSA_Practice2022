 //Maximum XOR of Two Numbers in an Array
class Solution {
public:
    struct node{
        node *links[2];  
    };
    
    
    int findMaximumXOR(vector<int>& nums) {
        
        node* root = new node();
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            node* curr = root;
            for(int j =31;j>=0;j--){
               int num = 1 & (nums[i]>>j);
                if(curr->links[num]==NULL){
                    curr->links[num] = new node();
                }
               curr = curr->links[num];
            } 
        }
        int ans = 0;
        int mx=0;
        for(int i=0;i<n;i++){
            node* curr = root;
            ans =0;
            for(int j=31;j>=0;j--){
                int num = (1) &(nums[i]>>j);
                if(curr->links[1-num]!=NULL){
                    
                    curr = curr->links[1-num];
                    ans = ans | (1<<j);
                }
                else{
                    curr = curr->links[num];
                }
            }
            mx = max(ans,mx);
        }
        return mx;
        
    }
};