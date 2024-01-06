//list way of storing 
// for undirected

int main(){

    int n,m;
    cin>>n>>m;


    vector<int>adj[n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // on u-th index store v coz it is neighbour;
        
        adj[u].push_back(v);
        //on vth index store u coz its a neighbour;
        adj[v].push_back(u);




    }
}

// for directed graph 
// u--->v only
//remove->  adj[v].push_back(u);