#ifndef UNTITLED1_GRAPH_H
#define UNTITLED1_GRAPH_H
#include <list>
#include <stack>
#include <fstream>

using namespace std;
class Graph
{
    int V;
    list<int> *adj;
    list<int> *euler_cicle_list;
    stack<int> S;
    void fillOrder(int v, bool visited[], stack<int> &Stack);
    bool *visited;
    void DFSUtil(int v, bool visited[], ofstream& myfile);
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);
    void addEdge(int v, int w);
    void printSCCs(ofstream& myfile);
    bool checkScc();
//    void euler_circle();
//    bool DFSfindCycle(int v, int w, stack & S, bool * visited);

    Graph getTranspose();
};


//
//void Graph::euler_circle(int v, list<int> *list_to_search){
//    visited = new bool[V];
////    for(int i = 0; i < V; i++)
////        visited[i] = false;
//
//    euler_cicle_list = new list<int>[V];
//    int u;
//
//    //list<int>::iterator i;
////    for(i = adj[v].begin(); i != adj[v].end(); ++i)
////        *i
//
//    visited[v] = true;            // Oznaczamy v jako odwiedzony
//    for(int i = 1; i != list_to_search[v].size(); ++i){
//        list_to_search[v].remove(i);
//        if(list<int>::iterator iter = std::find(list_to_search[i].begin(), list_to_search[i].end(), v)){
//
//        }
//    }
//
//        if(graf[w][u])
//        {
//            if(u == v)                // Cykl znaleziony?
//            {
//                addC(v,p);              // Zamykamy cykl na liście C
//                do
//                {
//                    graf[p->v][p->next->v] = 0; // Usuwamy krawędzie cyklu
//                    if(p->v == v) return true;
//                    p = p->prev;
//                } while(true);
//            }
//            if(!visited[u] && DFSaddCycle(v,u,p)) return true;
//        }
//    p = p->prev;                 // Z listy usuwamy w
//    remC(p->next);
//    return false;
//}
//
//bool Graph::DFSfindCycle(int v, int w, stack<int> &Stack, bool* visited){
//
//
//}
#endif //UNTITLED1_GRAPH_H
