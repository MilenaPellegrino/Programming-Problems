// Busqueda en profundidad

/* 
  DESCRIPCION:
	- empezando por el nodo original, 
	- visitar cada uno de sus vecinos no visitados, 
	- al visitar uno de estos vecinos (v) visitamos todos los vecinos no visitados de v 
	- y vamos repitiendo este proceso hasta que no queden nodos no visitados conectados al original. 
	
	Nótese que al encontrar un vecino lo visitamos antes siquiera de acabar de ver cuales eran nuestros demás vecinos.  


  USOS:
    - Encontrar nodos conectados en un grafo
    - Ordenamiento topológico en un grafo acíclico dirigido
    - Encontrar puentes en un grafo de nodos
    - Resolver puzzles con una sola solución, como los laberintos
    - Encontrar nodos fuertemente conectados

*/

// ALGORITMO
/* 
   DESCRIPCION: 
	- tener un vector de booleanos que dado un nodo nos diga si ha sido visitado y, 
	- crear una función recursiva que dado un nodo, si no ha sido previamente visitado, visite a todos sus vecinos.

*/

// dado un nodo v visita a todos los nodos conectados a v
void dfs(ll v, vector<vector<ll>> &g, vector<bool> &vis) { // g[v] es un vector con los vecino de v
    vis[v] = true; // vis[v] es cierto si hemos visitado v
    for (ll u : g[v]) { //iteramos por todos los vecinos
        if (!vis[u]) {
            dfs(u, g, vis); //lo visitamos
        }
    }
}
