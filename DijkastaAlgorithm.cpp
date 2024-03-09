//#include <iostream>
//#include <vecto                                                             r>
//#include <queue>
//#include <climits>
//
//using namespace std;
//
//class Edge {
//public:
//    int src, dest, wt;
//    Edge(int s, int d, int w) : src(s), dest(d), wt(w) {}
//};
//
//void createGraph(vector<Edge> graph[], int V) {
//    for (int i = 0; i < V; i++) {
//        graph[i] = vector<Edge>();
//    }
//
//    graph[0].push_back(Edge(0, 1, 2));
//    graph[0].push_back(Edge(0, 2, 4));
//    graph[1].push_back(Edge(1, 3, 7));
//    graph[1].push_back(Edge(1, 2, 1));
//    graph[2].push_back(Edge(2, 4, 3));
//    graph[3].push_back(Edge(3, 5, 1));
//    graph[4].push_back(Edge(4, 3, 2));
//    graph[4].push_back(Edge(4, 5, 5));
//}
//
//class Pair {
//public:
//    int n, path;
//    Pair(int n, int path) : n(n), path(path) {}
//
//    bool operator>(const Pair &p) const {
//        return path > p.path;
//    }
//};
//
//vector<int> dijkstra(vector<Edge> graph[], int V, int src) {
//    priority_queue<Pair, vector<Pair>, greater<<Pair >>pq;
//    vector<int> dist(V, INT_MAX);
//    vector<bool> vis(V, false);
//
//    dist[src] = 0;
//    pq.push(Pair(src, 0));
//
//    while (!pq.empty()) {
//        Pair curr = pq.top();
//        pq.pop();
//
//        if (!vis[curr.n]) {
//            vis[curr.n] = true;
//            for (const Edge &e : graph[curr.n]) {
//                int u = e.src;
//                int v = e.dest;
//                if (!vis[v] && dist[u] + e.wt < dist[v]) {
//                    dist[v] = dist[u] + e.wt;
//                    pq.push(Pair(v, dist[v]));
//                }
//            }
//        }
//    }
//
//    return dist;
//}
//
//int main() {
//    int V = 6;
//    vector<Edge> graph[V];
//    createGraph(graph, V);
//
//    int src = 0;
//    vector<int> dist = dijkstra(graph, V, src);
//
//    for (int i = 0; i < V; i++) {
//        cout << dist[i] << " ";
//    }
//
//    return 0;
//}

#include<iostream>
using namespace std;
int main(){
	void printDivisors(int n){
		for(int i=1;i*i<=n;i++){
			if(n%i==0){
				print(i)
				if(i!=n/i){
					print(n/i);
				}
			}
		}
	}
}
