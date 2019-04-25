//Name: Prinn Prinyanut
//Class: CSCI3761
//Description: Lab 3 Minimum Spanning Tree

#ifndef Graph_h
#define Graph_h

#include <iostream>
#include <vector>
//#include <bits/stdc++.h> //uncomment this for the grid
using namespace std;

// Creating shortcut for an integer pair
typedef  pair<int, int> iPair;
// Structure to represent a graph
struct Graph
{
    int vertex;
    vector< pair<int, iPair> > edges;
    
    // Constructor
    Graph(int vertex) {
        this->vertex = vertex;
    }
    
    // Utility function to add an edge
    void addEdge(int firstNode, int secondNode, int weight) {
        edges.push_back({weight, {firstNode, secondNode}});
    }
    // Function to find MST using Kruskal's
    // MST algorithm
    int kruskalMST(int print);
};


#endif /* Graph_h */
