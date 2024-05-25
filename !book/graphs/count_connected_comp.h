

// Suponemos que el grafo que le paso como parametro es una lista de adyacencia
int countConnectedComponents(vector<vector<int>>& graph) {

    int n = graph.size(); // guardamos el tamano total del grafo LA CANTIDAD DE NODOS QUE TIENE  
    vector<bool> visited(n, false); // guarda los nodos que hemos visitados (usado en dfs)
    int count = 0;
    fore(i, 0, n) {
        if (!visited[i]) { // si un nodo no fue visitado 
            dfs(i, graph, visited); // con dfs iteramos sobre todos los vecinos 
            count++;  // sumamos uno al contador W
        }
    }
    return count;
}
