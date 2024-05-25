// Busqueda en anchura 

/* 
  DESCRIPCION:
	- algoritmo de búsqueda para lo cual recorre los nodos de un grafo,
	- comenzando en la raíz (eligiendo algún nodo como elemento raíz en el caso de un grafo), 
	- luego explorar todos los vecinos de este nodo. 
	- Para cada uno de los vecinos se exploran sus respectivos vecinos adyacentes, 
	- y así hasta que se recorra todo el grafo. 

	Cabe resaltar que si se encuentra el nodo antes de recorrer todos los nodos, concluye la búsqueda.

	- Se visitan los nodos ordenados por la distancia al origen, 
	- visitamos todos los nodos a distancia 1 del original,
	-  luego los de distancia 2… 

  USOS:
	- Algoritmos en donde resulta crítico elegir el mejor camino posible en cada momento del recorrido.
	- Probar si un grafo de nodos es bipartito (si se puede dividir en 2 conjuntos)
	- Encontrar el árbol de expansión mínima en un grafo no ponderado
*/

// ALGORITMO
/* 
   DESCRIPCION: 
	- Se recorren los nodos del grafo usando un “iterador” 
	- comienza desde el primer nodo ingresado hasta el último nodo ingresado, 
	- recorriendo los nodos vecinos primeramente antes de los nodos hijos. 
	- Se utilizan dos variables “nodoVisitado” y “nodoProcesado” para organizar el recorrido en anchura. 
	- Uso de la estructura de datos cola para visitar los nodos en orden de llegada. 
	- Es decir, el primero procesa los nodos que primero llegaron a la cola.

	- La idea del algoritmo es ir añadiendo en una lista, qué nodos hay que visitar. 
	- Vistamos el nodo original, cada uno de sus vecinos no visitados serán apuntados en la lista, 
	- manteniendo el orden de la misma, al acabar, iremos al primer nodo de la lista
	- y si no lo hemos visitado repetiremos el procedimiento, 
	- luego iremos al segundo nodo de la lista y si no lo hemos visitado repetiremos el procedimiento... 
	- y así hasta que completemos la lista. Veamos como se aplicaría este algoritmo en el ejemplo anterior:

*/
     
vector <bool> visited; // Nos dice si hemos visitado algun nodo 

void bfs(vvll &G, ll v){
    queue <ll> Q;  // Lista de nodos a visitar 
    Q.push(v); //empezamos con el nodo origen

    while (not Q.empty()){ //mientras nuestra lista tenga nodos
        ll u = Q.front(); //seleccionamos el primer nodo de la lista
        Q.pop(); //y lo eliminamos

        if (not visited[u]){ //si no lo hemos visitado
            visited[u] = true;

            for (ll i = 0; i < G[u].size(); ++i){
                ll w = G[u][i];

                Q.push(w); //ponemos a sus vecinos en la lista
            }
        }
    }
}
