#include<bits/stdc++.h>
using namespace std;


class Solution
{

public:
void SetZeroes(vector<vector<int>>&matrix){

    int m=matrix.size();
    int n=matrix[0].size();
    vector<bool>Row(m,false);
    vector<bool>col(n,true);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (matrix[i][j]==0){
                Row[i]=true;
                col[j]=true;
                
            }
        }
    }



}
}
;