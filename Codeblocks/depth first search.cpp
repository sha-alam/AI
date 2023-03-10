#include<bits/stdc++.h>
using namespace std;

bool visited[100] = {false};
void dfs(int v,vector<int>g[]){
    visited[v] = true;
    cout << " " << v;
    for(auto child:g[v]){
        if(!visited[child])
            dfs(child,g);
    }
}
int main(){
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
    dfs(s, g);
}
