//
//  main.cpp
//  Chess Persona Modeling Research
//  
//


#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <sstream>
#include "parser.h"

using namespace std;

int main(int argc, const char * argv[]) {
    /*
    string file_src = "/Users/mdkabir/Desktop/ChessLearning/ChessLearning/365chess_games.pgn";
    string other_src = "/Users/mdkabir/Downloads/365chess_games.pgn";
    
    ifstream input(file_src);
    
    // Store Event Information
    unordered_map<string,string> event_info;
    for(int i =0; i < 10; ++i){
        //parse each line
        string data;
        getline(input,data);
        //remove brackets and quotes
        data.pop_back();
        data.pop_back();
        data = data.substr(1,data.size()-1);
        event_info[data.substr(0,data.find(' '))] = data.substr(data.find(' ')+2);
    }
    
    //get the move line
    string roundNo, whiteMove, blackMove;
    bool won = false;
    //process move line and game over
    while(input >> roundNo >> whiteMove >> blackMove){
        int round = stoi(roundNo);
        if(blackMove.find('-') != -1 && blackMove.find('O') == -1){
            cout << "Game over! White Won" << endl;
            won  = true;
            break;
        }
        else{
            cout << "Round:" << round << " White Move: " << whiteMove << ", Black Move: " << blackMove << endl;
        }
    }
    
    if(!won){
         cout << "Game over! Black Won" << endl;
    }

    */
    cout << FILE_PATH << endl;
    return 0;
}

