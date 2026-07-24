class Solution {
public:
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int original;
void dfs(vector<vector<char>>& image,int i,int j,int m,int n){
    if(i<0 or j<0 or i>=m or j>=n or image[i][j]=='0'){
        return ;
    }
    image[i][j]='0';
    for(int itr=0;itr<4;itr++){
        dfs(image,i+dx[itr],j+dy[itr],m,n);
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    c++;
                    dfs(grid,i,j,m,n);
                }
            }
        }
        return c;
    }
};