#include <iostream>
#include <fstream>
#include "Graph.h"
using namespace std;

int main()
{

    std::fstream  myfile;
    myfile.open("macierz.txt");
    int m, n, node1, node2;
    myfile >> m >> n;

    ofstream output;
    output.open ("filename.txt");

    Graph g(m+1);
    for(int i = 0; i < n; ++i){
        myfile >> node1 >> node2;
        g.addEdge(node1, node2);
    }

    //g.printSCCs(output);

    if(g.checkScc()){
        cout << "Euler graph!";
    }

    myfile.close();
    output.close();
    return 0;
}