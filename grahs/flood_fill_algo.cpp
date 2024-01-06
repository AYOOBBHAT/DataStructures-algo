class solution {
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int newColor,int delRow[],int delCol[]){

        ans[row][col]=newColor;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){

            int row=row+delRow[];
            int col=col+delCol[];

            if(nrow>=0 && ncol>=0 && ncol<m && image[nrow][ncol]==ini && ans[nrow
            ][ncol!=newColor])
            dfs(nrow,ncol,image,newColor,delRow)
        }

    }



public:
vector<vector<int>>flood(vector<vector<int>&image, int sr,int sc,int new_color){


int int_color=image[sr][sc];
vector<vector<int>>ans=image;
int delCol[]={-1,0,+1,0};
int delRow[]={0,+1,0,-1};
dfs 9sr,sc,ans,image,newColor,delRow,delCol,ini)

return ans;





    }
}






}