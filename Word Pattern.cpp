class Solution {
public:
    bool wordPattern(string pattern, string s) {
       int i=0;
        int j=0;
        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        while((i < pattern.length()) && (j<s.length())){
            string str = "";
            while( (j<s.length()) && s[j]!=' '){
                str.push_back(s[j]);
                j++;
            }
            if(mp1.find(pattern[i])!=mp1.end() ||mp2.find(str)!=mp2.end()){
                if(mp1[pattern[i]]!=str){
                    return false;
                }
                if(mp2[str]!=pattern[i]){
                    return false;
                }
            }
            mp1[pattern[i]]=str;
            mp2[str] = pattern[i];
            i++;
            j++;
            
         }
       
        if(i<pattern.length()||j<s.length()){
            return false;
        }
              return true;
              }
    
};