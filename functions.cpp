//Name: Prinn Prinyanut
//Class: CSCI3761
//Description: Lab 3 Minimum Spanning Tree

#include "functions.h"

//ask for user input function
void runProgram() {
    string prompt = "";
    string fileName = "";
    
    while (true) {
        
        cout << "\nExample: > mymst input.txt\n";
        cout << "> ";
        cin >> prompt >> fileName;
        
        if (prompt == "mymst") {
            mst(fileName);
            break;
        } else {
            cout << "\nInvalid prompt. Please enter prompt again.\n";
        }
    }
}

//read from file function
void mst(string fileName){
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now(); //start clock
    
    int vectorInt = 0;
    string vectorString;
    
    int firstNode = 0;
    int secondNode = 0;
    int weight = 0;
    string firstNodeString;
    string secondNodeString;
    string weightString;
    
    fstream inFile;
    inFile.open(fileName);
    
    if (!inFile) {
        cerr << "Unable to open file " << fileName << "\n\n";
        exit(1);   // call system to stop
    }
    
    getline(inFile, vectorString);
    stringstream geek0(vectorString);
    geek0 >> vectorInt;
    
    Graph g(vectorInt); //create graph
    
    while (getline(inFile, firstNodeString, ' ')) {
        getline(inFile, secondNodeString, ' ');
        getline(inFile, weightString);
        
        //conver to real type
        stringstream geek1(firstNodeString);
        geek1 >> firstNode;
        stringstream geek2(secondNodeString);
        geek2 >> secondNode;
        stringstream geek3(weightString);
        geek3 >> weight;
        
        //store data into graph
        g.addEdge(firstNode, secondNode, weight);
        
    }
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start; //calculate total time
    cout << "\nTotal Excution Time = " << elapsed_seconds.count() * 1000 << " ms\n";
    
    int mst_wt = g.kruskalMST(0);
    cout << "Minimum Cost = " << mst_wt << endl; //get total weight
    
    cout << "Minimum Spanning Tree (T): "; //print out pairs
    g.kruskalMST(1);
    cout << endl << endl;
    
}


