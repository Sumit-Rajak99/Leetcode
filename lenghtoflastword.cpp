class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        bool str=false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == ' ' && str==true){
                break;
                
            }
            else if(s[i]!=' '){
                str =true;
                ans++;
            }
        }
        return ans;
    }
};