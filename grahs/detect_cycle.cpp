class solution {

    private :

    bool detect(int src,vector<int >adj[],int vis[]){
        vis[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});

        while (q.empty()){
            int node =q.front ().first();
            int parent =q.front .second();
            q.pop();


            for(auto adjNode:adj[node]){


                if (!vist[adjNode]){
                    vis[adjNode]=1;

                    q.push({adjNode,node});



                }
                else if(parent!=adjNode){
                    return true;



                }

                return false;

            }






        }


    



    }





    public :

    bool is Cycle(int v,vector <int>adj[]){


        int vis[v]={0};

        // if any componet has a cycle;

        for (int i=0;i<v;v++){
            if (!vis[i]){
                if (detect(i,adj,vis))return true ;



            }

            return false ;






        }
    }










}