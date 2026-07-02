// // Given a grid . count the total unique path to reach the destination.
// #include<bits/stdc++.h>
// using namespace std;
//-----//Recursive

// int fun(int i, int j, vector<vector<int>>&cs,vector<vector<int>>&dp){
//     if(i==0 and j==0) return 1;
//     if(i<0 or j<0) return 0;
//     int up = fun(i-1,j,cs,dp);
//     int left = fun(i,j-1,cs,dp);

//     return (up+left);

// }

// int main(){
//     int n,m; cin>>n>>m;
//     vector<vector<int>>cs(n, vector<int>(m, 0)),dp(n+1, vector<int>(m+1,-1));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             // cin>>cs[i][j];
//             dp[i][j] = -1;
//         }
//     }
//     cout<<fun(n-1,m-1,cs,dp);
// }

// Iterative
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>>cs(n, vector<int>(m, 0)),dp(n+1, vector<int>(m+1,-1));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 and j==0) dp[i][j] = 1;
            else{
                int right=0,down=0;
                if(i>0) down = dp[i-1][j];
                if(j>0) right = dp[i][j-1];
                dp[i][j] = right+down;
            }
        }
    }
    cout<<dp[n-1][m-1];

}