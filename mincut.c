#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace	std;

/************************************************************************
For vertex v there is a path that goes to a next vertex with some weight
*************************************************************************/
//why a struct of paths? There is more than a possible way from v and each way as weight
struct path {
	struct vertex* v;
	struct path *next;
	struct path *nextResidual;
	int weight;
};




void init() {
    //int nodCount, edCount;
    int	procNum, commNum;

    cin >> procNum >> commNum;

    // X é o 0 e Y é o nr de processos +1
    int source = 0, sink = procNum + 1;


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