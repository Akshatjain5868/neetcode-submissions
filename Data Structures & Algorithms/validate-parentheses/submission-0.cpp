class Solution {
public:
    bool isValid(string s) {
        string ans="";
        for(int i=0; i<s.length(); i++){
            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                ans+=s[i];
            }
            else if(s[i]=='}' && ans.back()=='{' || s[i]==')' && ans.back()=='(' || s[i]==']' && ans.back()=='['){
                ans.pop_back();
            }
            else return false;
        }
        return ans=="";
    }
};
