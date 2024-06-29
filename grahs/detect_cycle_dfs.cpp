class solution {


    private :
    boo dfs(int node ,int parent,vector<int>vis[],vector<int>adj[] ){
        vis[node]=1;
        for(auto adjNode:adj[node]){

            if(!vis[adjNode]{

                if (dfs(adjNode,node,vis,adj)==true)return true;
            })
            else if (adjNode!=parent)return true;


            return false;


        }
    }



    public:


    bool isCycle(int v,vector<int>adj[]){

        int vis[v]={0};

        for(int i=0;i<v;i++){

            if(!vis[i]){

                if (dfs(i,-1,adj)==true )return true;

            }


        }


        return false ;
        
    }







}