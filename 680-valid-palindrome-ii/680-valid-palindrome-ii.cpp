class Solution {
public:
    bool fun(string s , int i , int j){
        
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
    bool validPalindrome(string str) {
        
        
        int i=0 , j = str.length()-1;
        
        while(i<j){
            if(str[i]==str[j]){
                i++;
                j--;
            }
            else{
                
                return fun(str,i+1 ,j)||fun(str,i,j-1);
            }
        }
        
        return true;
    }
};