class Solution {
public:

    string encode(vector<string>& strs) {
      string s;
      for(int i=0;i<strs.size();i++){
        string length_strs= to_string(strs[i].length());
        s=s+length_strs+'#'+ strs[i];
      }
      return s;
    }

    vector<string> decode(string s) {
      vector<string> ans;
      int i=0;
      while(i<s.size()){
        int j=i;
        while(s[j]!='#'){
            j++;
        }
        int len=stoi(s.substr(i,j));
        // if(len==0){
        //     ans.push_back("");
        // }
        string str = s.substr(j+1,len);
        ans.push_back(str);
        i=j+1+len;
      }
      return ans;
    }
};
