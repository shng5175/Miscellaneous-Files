#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#include <algorithm>

#include "Graph.hpp"

using namespace std;

Graph::Graph()
{
}

Graph::~Graph()
{
}

void Graph::addEdge(string v1, string v2, int dist)
{
	// add code here



}

void Graph::addVertex(string n)
{
	// add code here



}

void Graph::displayEdges()
{
    for(int i = 0; i < vertices.size(); i++)
	{
        cout << vertices[i].district << ":" <<vertices[i].name << "-->";
        for(int j = 0; j < vertices[i].adj.size(); j++)
		{
            cout << vertices[i].adj[j].v->name;
			cout << " (" << vertices[i].adj[j].distance << " miles)"; 
            if (j != vertices[i].adj.size()-1)
                cout << "***";
        }
        cout << endl;
    }
}

void Graph::assignDistricts()
{
    // Starting district numbers at 1
    int distID = 1;

    // For each of the vertices
    for(int i = 0; i < vertices.size(); i++)
    {
        // Only consider a vertex that has not been assigned a district.
        if (vertices[i].district == -1)
        {
            // Run breadth first traversal and assign each node in the network to this district.
            BFTraversalLabel(vertices[i].name,distID);
            distID++;
        }
    }
}

void Graph::BFTraversalLabel(std::string startingCity, int distID)
{
  queue<vertex*> q;
  // Label all as unvisited.
  for(int i = 0; i < vertices.size(); i++)
  {
    vertices[i].visited = false;
  }
  // Find the starting node and enqueue it.
  for(int i = 0; i < vertices.size(); i++)
  {
      if (vertices[i].name == startingCity)
      {
          // set current vertex to be visited.

		  // add code here




      }
  }
 // Now do the rest of the search.
 while (q.empty() != true)
 {
     vertex * u = q.front();		// get the next one from the queue
     q.pop();						// remove that one from the queue

	 // add code here
 }
}

vertex * Graph::findVertex(std::string name)
{
	 // add code here





    return NULL;
}
