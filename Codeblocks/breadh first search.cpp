#include <bits/stdc++.h>
using namespace std;

const int Max = 100000;
bool visited[Max];
vector<int> dist(Max);
void bfs(int src, vector<int> g[])
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (auto child : g[cur])
        {
            if (!visited[child])
            {
                q.push(child);
                dist[child] = dist[cur] + 1;
                visited[child] = true;
            }
        }
    }
}

int main()
{
    int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            visited[i] = false;
        vector<int> g[n + 1];
        while (m--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bfs(1, g);
        cout << dist[n] << endl;
    }
}
