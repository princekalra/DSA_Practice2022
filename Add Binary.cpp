//Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int i = 0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(i<(min(a.length(),b.length()))){
           carry+=(a[i]-'0');
            carry+=(b[i]-'0');
            res.push_back((carry%2)+'0');
            carry/=2;
            i++;
         }
        while(i<a.length()){
            carry+=(a[i]-'0');
            i++;
            res.push_back((carry%2)+'0');
            carry/=2;
        }
         while(i<b.length()){
            carry+=(b[i]-'0');
            i++;
            res.push_back((carry%2)+'0');
            carry/=2;
        }
        while(carry!=0){
            res.push_back((carry%2)+'0');
            carry/=2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};