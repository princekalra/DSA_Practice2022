Add Digits
class Solution {
public:
    int addDigits(int num) {
        int ans = 0;
        while(1){
            while(num!=0){
                ans = ans + (num%10);
                num/=10;
            }
            num = ans;
            ans = 0;
            if((num/10)==0){
            break; 
            }
        }
        return num;
    }
};