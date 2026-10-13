class Solution {
public:
    int n=0;
    vector<int>dp=vector<int>(101,-1);
    int numDecodings(string s) {
        n=s.size();
        dp.assign(n+1,-1);
        int pos=0;
        return numDecodingsHelper(s,pos);
    }
    int numDecodingsHelper(string s,int pos) {
        //BASE CONDn
         if(n==pos)return 1;
         if(s[pos]=='0')return 0;
         if(dp[pos]!=-1)return dp[pos];

        //LOGIC
        int count=numDecodingsHelper(s,pos+1);

        if(pos<n-1 && s.substr(pos,2)<"27"){
            count+=numDecodingsHelper(s,pos+2);
        }

        return dp[pos]=count;
    }
};
