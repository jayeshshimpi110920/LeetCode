class Solution {
public:
    bool checkIfPangram(string str) {
        
        
        vector<int> vt(26);
        
        for(int i=0;i<str.length();i++){
            
            vt[int(str[i])-int('a')]++;
        }
        
        for(int i=0;i<vt.size();i++){
            if(vt[i]==0) return false;
        }
        
        return true;
    }
};