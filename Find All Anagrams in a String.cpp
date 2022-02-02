//Find All Anagrams in a String
class Solution {
public:
    bool check(string &str1,string &str2){
        //cout<<str1<<" "<<str2<<endl;
        int arr[26]={0};
        for(int i=0;i<str1.length();i++){
            arr[str1[i]-'a']++;
            arr[str2[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int len = p.length();
        int i=0;
        vector<int>sol;
        while((i+len)<=n){
            string str = s.substr(i,len);
            if(check(str,p)){
                sol.push_back(i);
               
            }
          
                i++;
           
        }
        return sol;
    }
};