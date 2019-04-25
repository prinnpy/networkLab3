//Name: Prinn Prinyanut
//Class: CSCI3761
//Description: Lab 3 Minimum Spanning Tree

#include "DisjointSets.h"

// Constructor.
DisjointSets::DisjointSets(int n) {
    // Allocate memory
    this->n = n;
    parent = new int[n+1];
    rank = new int[n+1];
    
    // Initially, all vertices are in
    // different sets and have rank 0.
    for (int i = 0; i <= n; i++) {
        rank[i] = 0;
        //every element is parent of itself
        parent[i] = i;
    }
}
// Find the parent of a node 'u'
// Path Compression
int DisjointSets::find(int node) {
    /* Make the parent of the nodes in the path
     from u--> parent[u] point to parent[u] */
    if (node != parent[node])
        parent[node] = find(parent[node]);
    return parent[node];
}
// Union by rank
void DisjointSets::merge(int x, int y)
{
    x = find(x);
    y = find(y);
    
    /* Make tree with smaller height
     a subtree of the other tree  */
    if (rank[x] > rank[y])
        parent[y] = x;
    else // If rnk[x] <= rnk[y]
        parent[x] = y;
    
    if (rank[x] == rank[y])
        rank[y]++;
}
