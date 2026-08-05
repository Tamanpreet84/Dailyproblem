class Solution {
public:
int dp[1001][1001];
int lcs(int n, int m,string& a, string& b){
    if(n==0 || m==0){
        return 0;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    if(a[n-1]==b[m-1]){
        return dp[n][m]=1+lcs(n-1,m-1,a,b);
    }else{
        return dp[n][m]=max(lcs(n-1,m,a,b),lcs(n,m-1,a,b));
    }

}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        memset(dp,-1,sizeof(dp));
        return lcs(n,m,text1,text2);
    }
};