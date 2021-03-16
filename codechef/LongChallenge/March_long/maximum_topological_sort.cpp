#include <bits/stdc++.h>
using namespace std;

int answer1=0;
class Graph
{
    int V; // No. of vertices

    // Pointer to an array containing adjacency list
    list<int> *adj;

    // Vector to store indegree of vertices
    vector<int> indegree;

    // A function used by alltopologicalSort
    void alltopologicalSortUtil(vector<int> &res,
                                bool visited[]);

public:
    Graph(int V); // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // Prints all Topological Sorts
    void alltopologicalSort();
};

//  Constructor of graph
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];

    // Initialising all indegree with 0
    for (int i = 0; i < V; i++)
        indegree.push_back(0);
}

//  Utility function to add edge
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v's list.

    // increasing inner degree of w by 1
    indegree[w]++;
}

//  Main recursive function to print all possible
//  topological sorts
void Graph::alltopologicalSortUtil(vector<int> &res,
                                   bool visited[])
{
    // To indicate whether all topological are found
    // or not
    bool flag = false;

    for (int i = 0; i < V; i++)
    {
        //  If indegree is 0 and not yet visited then
        //  only choose that vertex
        if (indegree[i] == 0 && !visited[i])
        {
            //  reducing indegree of adjacent vertices
            list<int>::iterator j;
            for (j = adj[i].begin(); j != adj[i].end(); j++)
                indegree[*j]--;

            //  including in result
            res.push_back(i);
            visited[i] = true;
            alltopologicalSortUtil(res, visited);

            // resetting visited, res and indegree for
            // backtracking
            visited[i] = false;
            res.erase(res.end() - 1);
            for (j = adj[i].begin(); j != adj[i].end(); j++)
                indegree[*j]++;

            flag = true;
        }
    }

    //  We reach here if all vertices are visited.
    //  So we print the solution here
    if (!flag)
    {
        // for (int i = 0; i < res.size(); i++)
        // cout << res[i] << " ";
        // cout<< endl;
        answer1++;
    }
}

//  The function does all Topological Sort.
//  It uses recursive alltopologicalSortUtil()
void Graph::alltopologicalSort()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    vector<int> res;
    alltopologicalSortUtil(res, visited);
}

// Driver program to test above functions
int main()
{
    // Create a graph given in the above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "All Topological sorts\n";

    g.alltopologicalSort();
    cout<<answer1<<endl;

    return 0;
}

// another solution
// #include <bits/stdc++.h>
// using namespace std;

// #define pfin(a) printf("%d\n", a);
// #define pfln(a) printf("%lld\n", a);
// #define pfis(a) printf("%d ", a);
// #define pfls(a) printf("%lld ", a);
// #define sfi(a) scanf("%d", &a);
// #define sfl(a) scanf("%lld", &a);
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)
// #define f(i, a, b) for (int i = a; i < b; i++)
// #define pb(a) push_back(a);
// #define mp(a, b) make_pair(a, b)
// #define ll long long
// #define F first
// #define S second
// #define vi vector<int>
// #define vc vector<char>

// vi g[21];

// int n;
// ll cnt = 0;
// int all_visited;

// ll dp[(1 << 21)];

// ll rec(int mask, vi ind)
// {
//     if (dp[mask] != -1)
//         return dp[mask];
//     if (mask == all_visited)
//         return dp[mask] = 1;

//     ll ans = 0;

//     f(i, 0, n)
//     {
//         if ((ind[i] == 0) && ((mask & (1 << i)) == 0))
//         {
//             vi temp(ind);

//             f(j, 0, g[i].size())
//             {
//                 int v = g[i][j];
//                 temp[v]--;
//             }
//             ans = ans + rec((mask | (1 << i)), temp);
//         }
//     }

//     return dp[mask] = ans;
// }

// int main()
// {
//     int m;
//     sfi(n)
//         sfi(m)

//             vi ind(n);

//     memset(dp, -1, sizeof(dp));

//     all_visited = (1 << n) - 1;

//     f(i, 0, n)
//         ind[i] = 0;

//     while (m--)
//     {
//         int u, v;
//         sfi(u)
//             sfi(v)
//                 u--;
//         v--;
//         g[u].pb(v)
//             ind[v]++;
//     }

//     ll ans = rec(0, ind);

//     pfln(ans);

//     return 0;
// }