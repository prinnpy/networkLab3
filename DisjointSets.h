//Name: Prinn Prinyanut
//Class: CSCI3761
//Description: Lab 3 Minimum Spanning Tree

#ifndef DisjointSets_h
#define DisjointSets_h

// To represent Disjoint Sets
struct DisjointSets {
    
    int *parent, *rank;
    int n;
    
    // Constructor.
    DisjointSets(int n);
    // Path Compression
    int find(int node);
    // Union by rank
    void merge(int x, int y);
    
};

#endif /* DisjointSets_h */
