class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        
        vector<string> ans;

        for(string w : words){
            string temp = w;

            for(char &c : temp) c = tolower(c);
            
            
            int r1 = 0, r2 = 0, r3 = 0;
            
            for(char c : temp){
                if(row1.find(c) != string::npos) r1 = 1;
                else if(row2.find(c) != string::npos) r2 = 1;
                else if(row3.find(c) != string::npos) r3 = 1;
            }
            
            
            if(r1 + r2 + r3 == 1){
                ans.push_back(w);
            }
        }
        
        return ans;
    }
};
