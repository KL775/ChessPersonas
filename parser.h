//
//  file: parser.h
//  Chess Persona Modeling
//
//  info: file PgnParser Class Signature
//

#ifndef parser_h
#define parser_h

#include <unordered_map>
#include <string>
#include <fstream>
#include <sstream>
#include <deque>


namespace InfoProcess {
    
    //Class to Parse PGN Files
    class PgnParser{
    public:
        PgnParser(const std::string& filename);         // constructor
        std::string getInfo(const std::string& key);    // method info about the event
        std::deque<std::string> whiteMoveset();         // method the white moveset
        std::deque<std::string> blackMoveset();         // method the white moveset
        
        
    private:
        std::unordered_map<std::string, std::string>eventInfo;  // container to store event info
        std::deque<std::string>whiteMoveSet, blackMoveSet;      // containers to store move sets
    };

}


#endif /* parser_h */
