#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    vector<vector<int>> vis(n,vector<int>(m,0));

    //{{r,c},t}
    queue<pair<pair<int,int>,int>> q;

    int fresh_cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==2)
            {
                q.push({{i,j},0});
                vis[i][j] =2;
            }
            else if(grid[i][j]==1) fresh_cnt++;
        }
    }

    int cnt=0,min_time=0;
    vector<int> drow={-1,0,1,0};
    vector<int> dcol ={0,1,0,-1};
    while(!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;

        int t = q.front().second;
        q.pop();

        min_time = max(t,min_time);

        for(int i=0;i<4;i++)
        {
            int row = r+drow[i];
            int col = c+dcol[i];

            if(row<n&&row>=0 && col<m&&col>=0
            &&grid[row][col]==1&&vis[row][col]!=2)
            {
                q.push({{row,col},t+1});
                vis[row][col] =2;
                cnt++;
            }

        }
    }
    if(cnt==fresh_cnt) return min_time;

    return -1;
}
