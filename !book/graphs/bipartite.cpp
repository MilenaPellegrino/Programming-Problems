vii adj[MAXN];
int colors[MAXN];
bool can_be_bipartite = true;

void dfs(int v, int c) {
    if (colors[v] != -1) {
        if (colors[v] != c) {
            can_be_bipartite = false;
        }
        return;
    }
    colors[v] = c;
    for (int u : adj[v]) {
        dfs(u, 1 - c);
    }
}

bool is_bipartite(int n) {
    memset(colors, -1, sizeof(colors));
    can_be_bipartite = true;
    fore(i, 1, n+1){
        if (colors[i] == -1) {
            dfs(i, 0);
        }
    }
    return can_be_bipartite;
}