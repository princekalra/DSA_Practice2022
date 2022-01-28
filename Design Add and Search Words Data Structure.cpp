//Design Add and Search Words Data Structure
class Node
  {
      public:
      bool isEnd;
      Node*children[26];
      Node()
      {
          isEnd=false;
          for(int i=0;i<26;i++)
          {
              children[i]=NULL;
          }
      }
  };
class WordDictionary {
public:
Node*root;
    WordDictionary() {

root=new Node();
    }

    void addWord(string word) {
        Node*roots=root;
        for(int i=0;i<word.length();i++)
        {
            if(roots->children[word[i]-'a']==NULL)
            {
                roots->children[word[i]-'a']=new Node();
            }
            roots=roots->children[word[i]-'a'];
        }
        roots->isEnd=true;
    }
    
    bool searchWord(Node *temp, string &word,int i)
    {
        if(i==word.length())
        {
            if(temp->isEnd==true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool ans=0;
        if(word[i]!='.')
        {
              if(temp->children[word[i]-'a']==NULL)
            {
               return false;
            }
            return searchWord(temp->children[word[i]-'a'],word,i+1);
        }
        else if(word[i]=='.')
        {
            for(int j=0;j<26;j++)
            {
                if(temp->children[j])
                {
                    ans=ans||searchWord(temp->children[j],word,i+1);
                }
            }
        }
        return ans;
}
    bool search(string word) {
        return searchWord(root,word,0);
     
    }
};
