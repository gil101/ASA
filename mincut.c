#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace	std;


vector <Vertex*> graph;


/************************************************************************
For vertex v there is a path that goes to a next vertex with some weight
*************************************************************************/
struct Path {                       //why a struct of paths? There is more than a possible way from v and each way as weight
	struct vertex* v;
	struct path *next;
	struct path *nextResidual;
	int weight;
};


struct Vertex{
	int id;
	struct Vertex* predecessor;
	struct Path* path;              //each vertex has a list of possible paths
	int minCost;                        //mincost,  to find later
	char color;                         //at the end of the algo this will give us the mincut
};




void init() {
    //int nodCount, edCount;
    int	procNum, commNum;

    cin >> procNum >> commNum;

    // X é o 0 e Y é o nr de processos +1
    int source = 0, sink = procNum + 1;

    //Alocate the number of vertices to the graph
	for (int i = 0; i <= sink ; i++)
		graph.push_back(new Vertex[1]);

}


int main()
{
    //Make cin/cout operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //init();

    //int maxFlow = edmondsKarp(gSource, gSink);

    //cout << endl << endl << "Max Flow is:" << maxFlow << endl;
    //cout << maxFlow << endl;
}