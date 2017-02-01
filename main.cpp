//
//  file: main.cpp
//  Chess Persona Modeling
//
//  info: main file to run code
//


#include <iostream>
#include "parser.h"

using namespace std;
using namespace InfoProcess;

int main(int argc, const char * argv[]) {
    
    string file_src = "PATH TO PGN FILE";
    PgnParser parser = PgnParser(file_src);
    deque<string>whiteMove = parser.whiteMoveset();
    deque<string>blackMove = parser.blackMoveset();
    while(!whiteMove.empty() && !blackMove.empty()){
        cout << "First Player: " << whiteMove.front() << ", Second Player: "<<blackMove.front() << endl;
        whiteMove.pop_front();
        blackMove.pop_front();
    }
    
    return 0;
}

