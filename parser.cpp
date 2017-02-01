//
//  file: parser.h
//  Chess Persona Modeling
//
//  info: file PgnParser Class Signature
//


#include <stdio.h>
#include "parser.h"
#include <iostream>

using namespace std;
using namespace InfoProcess;

// Constructor Definition
PgnParser::PgnParser(const string& filename){
    ifstream pgn(filename); // setup the file
    //check if the file exists
    if(!pgn){
        cerr<<"Error File: "<< filename << endl;
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

    
    
}



/*

 std::string getInfo(const std::string& key){    //method info about the event
 return eventInfo[key];
 }
 
 std::deque<std::string> whiteMoveset(){         //method the white moveset
 return whiteMoveSet;
 }
 
 std::deque<std::string> blackMoveset(){         //method the white moveset
 return blackMoveSet;
 }

*/
