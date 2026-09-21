class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>umap{
           {')', '('},
           {']', '['},
           {'}', '{'}
        };
        stack<char>st;
        for(auto c:s){
          if(c=='('||c=='{'||c=='['){
            st.push(c);
          }
          else{
            if(st.empty()){
                return false;
            }
            if(st.top()!=umap[c]){
                return false;
            }
            st.pop();
          }

        }
        return st.empty();
    }
};
