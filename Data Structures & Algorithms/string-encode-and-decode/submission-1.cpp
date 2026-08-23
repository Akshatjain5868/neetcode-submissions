class Solution {
  public:
    string encode(vector<string>& arr) {
        string ans="";
        for(int i=0; i<arr.size(); i++){
            ans+=to_string(arr[i].length())+"/:"+arr[i];
        }
        return ans;
    }

    vector<string> decode(string& s) {
        vector<string> ans;
        int i=0;
        while(i<s.length()){
            int curr=0;
            while(s[i]!='/' && s[i+1]!=':'){
                curr=(curr*10)+s[i]-'0';
                i++;
            }
            i+=2;
            ans.push_back(s.substr(i,curr));
            i+=curr;
        }
        return ans;
    }
};