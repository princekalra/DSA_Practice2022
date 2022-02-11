//Permutation in String
class Solution {
public:
    bool check(int arr1[],int arr[]){
       
        for(int i=0;i<26;i++){
            //cout<<arr[i]<<"|"<<arr1[i]<<" "; 
            if(arr1[i]!=arr[i]){
                return false;
            }
        }
       
        return true;
           
    }
    bool checkInclusion(string s1, string s2) {
     
        int n = s1.length();
        int m = s2.length();
        if(m<n){
            return false;
        }
        int arr1[26]={0};
        for(int i=0;i<s1.length();i++){
            
            arr1[s1[i]-'a']+=1;
        }
        int arr[26]={0};
        int i;
        for(i=0;i<n;i++){
            arr[s2[i]-'a']+=1;
            if(check(arr,arr1)){
                return true;
            }
        }
      
        int start=0;
        while(i<m){
            arr[s2[start]-'a']-=1;
            arr[s2[i]-'a']+=1;
            if(check(arr1,arr)){
                return true;
            }
            i++;
            start++;
        }
        return false;
        
    }
};