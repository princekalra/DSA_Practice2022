Word Ladder
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
     
        unordered_map<string,int>mp;
        unordered_map<string,int>mp1;
        for(int i=0;i<wordList.size();i++){
            mp[wordList[i]]=1;
        }
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        // unordered_set<string>st;
        // st.insert(beginWord);
        mp1[beginWord]=1;
        
        while(q.empty()==false){
            string str = q.front().first;
            int cnt = q.front().second;
           
            if(str==endWord){
                return cnt;
            }
            q.pop();
            int n = str.length();
            for(int i=0;i<n;i++){
                for(char c = 'a';c<='z';c++){
                    string newstr = str;
                    newstr[i] = c;
                    if(mp[newstr]==1 && mp1[newstr]==0){
                        q.push({newstr,cnt+1});
                        mp1[newstr]=1;
                        // st.insert(newstr);
                    }
                    
                    
                }
            }
        }
        return 0;
    }
};