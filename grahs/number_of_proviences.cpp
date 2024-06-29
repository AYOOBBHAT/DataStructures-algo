//   Given an undirected graph with V vertices.
//  We say two vertices u and v belong to a single
//   province if there is a path from u to v or v to u.
//    Your task is to find the number of provinces.

//  Note: A province is a group of directly or indirectly connected cities and no other cities outside of the group.
class Solution{

void dfs(int node ,.....){
/// dfs code 

}

    public:


    int nProvinces(vector<vector<int>>adj, int v){
        vector<int>adjLs[v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(adj[i][j]==1 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                    }
                }
            }

            int vis[v]={0};
            int count=0;
            for(int i=0;i<v;i++) {
                if(!vis[i]){
                    count++;
                    dsf(i,adjLs,vis);
                }


        }



    }
}