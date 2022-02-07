Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26] = {0};
        int n = s.length();
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        char ans;
        for(int i=0;i<t.length();i++){
           arr[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                ans = 'a'+i;
                break;
            }
        }
        return ans;
    }
};