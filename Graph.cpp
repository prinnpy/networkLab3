//Name: Prinn Prinyanut
//Class: CSCI3761
//Description: Lab 3 Minimum Spanning Tree

#include "Graph.h"
#include "DisjointSets.h"

struct Connect {
    int first;
    int second;
};

/* Functions returns weight of the MST*/
int Graph::kruskalMST(int print)
{
    int mstWeight = 0; // Initialize result
    
    // Sort edges in increasing order on basis of cost
    sort(edges.begin(), edges.end());
    
    // Create disjoint sets
    DisjointSets ds(vertex);
    
    // Iterate through all sorted edges
    vector< pair<int, iPair> >::iterator it;
    vector<Connect> c;
    Connect pairs;
//    vector<int,int> lowWeightEdges;
    for (it = edges.begin(); it != edges.end(); it++) {
        int firstNode = it->second.first;
        int secondNode = it->second.second;
        
        int firstNodeSet = ds.find(firstNode);
        int secondNodeSet = ds.find(secondNode);
        
        // Check if the selected edge is creating
        // a cycle or not (Cycle is created if u
        // and v belong to same set)
        if (firstNodeSet != secondNodeSet)
        {
            pairs.first = firstNode;
            pairs.second = secondNode;
            c.push_back(pairs);
            
            mstWeight += it->first; // Update MST weight
            ds.merge(firstNodeSet, secondNodeSet); // Merge two sets
        }
    }
    //print out pairs
    if (print == 1) {
        for (int i = 0; i < c.size(); i++) {
            cout <<"(" << c[i].first << "," << c[i].second << ")";
            if (i != c.size() - 1)
                cout << " -> ";
        }
    }
    
//    for (int i = 0; i < lowWeightEdges.size(); i++ {
//        cout <<"(" << firstNode << "," << secondNode << ") , ";
//    }
    
    return mstWeight;
}
