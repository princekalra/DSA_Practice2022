//Palindrome Partitioning
class Solution {
public:
    bool isPalindrome(string str){
        int start = 0;
        int end = str.length()-1;
        while(start<end){
            if(str[start]!=str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void helper(string str,int index,vector<string>&sol,vector< vector<string> >&output){
      
        if(index>=str.length()){
            output.push_back(sol);
            return;
        }
        for(int i=index;i<str.length();i++){
            if(isPalindrome(str.substr(index,i-index+1))){
                sol.push_back(str.substr(index,i-index+1));
                helper(str,i+1,sol,output);
                sol.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector< vector<string> >output;
        vector<string>sol;
        helper(s,0,sol,output);
        return output;
    }
};