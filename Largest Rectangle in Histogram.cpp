//Largest Rectangle in Histogram
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>left(n+2,0);
        vector<int>right(n+2,n+1);
        stack<int>st;
        for(int i=1;i<=n;i++){
          
                while(st.empty()==false && heights[i-1]<=heights[st.top()-1]){
                    st.pop();
                }
                if(st.empty()){
                    left[i] = 0;
                }
                else{
                    left[i] = st.top();
                }
          
            st.push(i);
        }
       while(st.empty()==false){
            st.pop();
        }
         for(int i=n;i>=1;i--){
           
                while(st.empty()==false && heights[i-1]<=heights[st.top()-1]){
                    st.pop();
                }
                if(st.empty()){
                    right[i] = n+1;
                }
                else{
                    right[i] = st.top();
                }
          
             st.push(i);
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            ans = max(ans,(abs(right[i]-left[i]-1)*heights[i-1]));
        }
        return ans;
    }
};