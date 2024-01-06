
#include <iostream>;
using namespace std;
// matrix way;
int main()
{
// enter nodes,edges;
    int n, m;

    cin >> n >> m;
    //dfine matrix 
    // 1 based indexing

    int adj[n + 1][m + 1];

    for (int i = 0; i < m; i++)
    {

        int u, v;
        cin >> u >> v;
        ;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}