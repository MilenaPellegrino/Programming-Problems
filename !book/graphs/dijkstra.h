// Dados un grafo G, sus pesos W, el número de nodos n, y dos nodos s, t devuelve la mínima
// distancia entre s y t
// EXPLICACION DEL VECTOR DE PESOS: 
/*
Para cada nodo u en el grafo, G[u] contiene una lista de nodos v que son adyacentes a u, y W[u] contiene los pesos correspondientes de las aristas entre u y cada uno de estos nodos v.

Por ejemplo, si G[u][i] es v, entonces W[u][i] es el peso del arco de u a v.
*/
int dijkstra(vvi& G, vvi& W, int n, int s, int t) {
    vector<bool> vis(n, false); // nodos visitados, inicialmente ninguno
    vector<int> dist(n, INT_MAX); // distancia mínima desde el origen, inicializada a infinito
    priority_queue<ii, vector<ii>, greater<ii>> Q; // cola de prioridad min-heap
    Q.push({0, s}); // introducimos el nodo origen (a distancia 0 de él mismo)
    dist[s] = 0; // la distancia del nodo origen a sí mismo es 0

    while (!Q.empty()) {
        ii arc = Q.top(); // arco con menor peso
        Q.pop(); // lo quitamos de la cola

        int v = arc.second; // vértice de Q a menor distancia del nodo origen
        int p = arc.first; // distancia entre el nodo origen y v
        
        if (v == t) return p; // si es el nodo destino hemos acabado

        if (!vis[v]) { // si no lo hemos visitado
            vis[v] = true;
            for (int i = 0; i < G[v].size(); ++i) { // miramos sus vecinos
                int u = G[v][i];
                int w = W[v][i];

                if (!vis[u] && dist[u] > p + w) { // si no lo hemos visitado y encontramos una distancia menor
                    dist[u] = p + w; // actualizamos la distancia
                    Q.push({dist[u], u}); // añadimos los vecinos con la distancia a s
                }
            }
        }
    }
    return INT_MAX; // no hay caminos entre s y t
}


// ALGORITMO DE DJISTRA MODIFICADO QUE VA OBTENIENDO EN CADA PASO POR QUE NODO PASO 
// El algoritmo modifica Dijkstra para almacenar los predecesores de cada nodo en un vector pred.
int dijkstra(vvi& G, vvi& W, int n, int s, int t, vi& path) {
    vector<bool> vis(n, false); // nodos visitados, inicialmente ninguno
    vector<int> dist(n, INT_MAX); // distancia mínima desde el origen, inicializada a infinito
    vector<int> pred(n, -1); // predecesores para reconstruir la ruta
    priority_queue<ii, vector<ii>, greater<ii>> Q; // cola de prioridad min-heap
    Q.push({0, s}); // introducimos el nodo origen (a distancia 0 de él mismo)
    dist[s] = 0; // la distancia del nodo origen a sí mismo es 0

    while (!Q.empty()) {
        ii arc = Q.top(); // arco con menor peso
        Q.pop(); // lo quitamos de la cola

        int v = arc.second; // vértice de Q a menor distancia del nodo origen
        int p = arc.first; // distancia entre el nodo origen y v
        
        if (v == t) { // si es el nodo destino hemos acabado
            // Reconstruir la ruta
            path.clear();
            for (int at = t; at != -1; at = pred[at]) {
                path.push_back(at);
            }
            reverse(path.begin(), path.end());
            return p; // retornar la distancia mínima
        }

        if (!vis[v]) { // si no lo hemos visitado
            vis[v] = true;
            for (int i = 0; i < G[v].size(); ++i) { // miramos sus vecinos
                int u = G[v][i];
                int w = W[v][i];

                if (!vis[u] && dist[u] > p + w) { // si no lo hemos visitado y encontramos una distancia menor
                    dist[u] = p + w; // actualizamos la distancia
                    pred[u] = v; // actualizamos el predecesor
                    Q.push({dist[u], u}); // añadimos los vecinos con la distancia a s
                }
            }
        }
    }
    return INT_MAX; // no hay caminos entre s y t
}

// El problema dijkstra? de coderforces hace la reconstruccion de los nodos 