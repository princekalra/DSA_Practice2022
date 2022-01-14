//String to Integer (atoi)
class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0){
            return 0;
        }
        int i=0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        s = s.substr(i);
        i=0;
        int sign = 1;
        long long ans = 0;
        if(s[0]=='-'||s[0]=='+'){
          
            sign = s[0]=='+'?1:-1*1;
            i++;
        }
       int min = INT_MIN;
        while(i<s.length()){
            cout<<ans<<endl;
            if(s[i]==' '||!isdigit(s[i])){
                return ans*sign;
            }
            ans = ( (ans*10) + (s[i]-'0'));
            if(sign==1 && ans>INT_MAX){
                ;
                return INT_MAX;
              
            }
            if(sign==-1 && -1*ans<=min){
             
                return INT_MIN;
                
            }
            i++;
            cout<<ans<<endl;
        
        }
        return (int)ans*sign;
    }
};