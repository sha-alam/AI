#include <bits/stdc++.h>
using namespace std;

bool visited[1000]={false};
void bfs(int src, vector<int> g[])
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int cur = q.front();
        cout<<cur<<" ";
        q.pop();
        for (auto child : g[cur])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
}
int main()
{
    int n, e,s;
    cout<<"Enter Node and Edge Number"<<endl;
    cin >>n>> e;
    vector<int> g[n + 1];
    cout<<"Enter the Graph"<<endl;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout<<"Enter the start vertices: ";
    cin>>s;
    bfs(s, g);
}
