//
//  file: parser.cpp
//  Chess Persona Modeling
//
//  info: file PgnParser Class Definition
//


#include <stdio.h>
#include "parser.h"
#include <iostream>

using namespace std;
using namespace InfoProcess;

// Constructor Definition
PgnParser::PgnParser(const string& pathToFile){
    ifstream pgn(pathToFile); // setup the file
    //check if the file exists
    if(!pgn){
        cerr<<"Error File: "<< pathToFile << endl;
        exit(-5);
    }
    //go until the beginning of the moves
    for(int i =0; i < 10; ++i){
        //parse each line
        string data;
        getline(pgn,data);
        //remove brackets and quotes
        data.pop_back();
        data.pop_back();
        data = data.substr(1,data.size()-1);
        //map the info
        eventInfo[data.substr(0,data.find(' '))] = data.substr(data.find(' ')+2);
    }
    
    string moveline;        // setup variable to store moveline
    getline(pgn,moveline);  // skip one line
    getline(pgn,moveline);  // store moveline
    
    istringstream data(moveline);   // setup string stream to process data
    string dataToken;               // setup token to store data
    int roundToken = 0;             // setup token to track turn and round
    while(getline(data,dataToken,' ')){
        ++roundToken; //increment round token every iteration
        
        //check if it's white or black player's turn
        if(roundToken == 2){
            whiteMoveSet.push_back(dataToken);
        }
        else if(roundToken == 3){
            blackMoveSet.push_back(dataToken);
            roundToken = 0;
        }
        
    }
}

//event info method definition
string PgnParser::getInfo(const string& key){
    return eventInfo[key];
}

//method to get the white moveset
deque<string> PgnParser::whiteMoveset(){
    return whiteMoveSet;
}

//method to get the black moveset
deque<string> PgnParser::blackMoveset(){
    return blackMoveSet;
}
