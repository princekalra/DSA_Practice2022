Complement of Base 10 Integer.cpp
class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        if(n==0){
            return 1;
        }
        for(int i=0;pow(2,i)<=n;i++){
            ans|=(1<<i)^(n&(1<<i));
        }
        return ans;
    }
};