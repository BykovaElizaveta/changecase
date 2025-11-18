#include "changecase.h"

void toggle_case(std::ifstream & inFile, std::ofstream & outFile) {    
    int ch;
    while ((ch = inFile.get()) != EOF) {      
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a') + 'A'; 
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A') + 'a';
        }
        outFile.put(ch); 
    }
}

void to_lower_case(std::ifstream& inFile, std::ofstream& outFile) {    
    int ch;
    while ((ch = inFile.get()) != EOF) {     
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A') + 'a';
        }
        outFile.put(ch); 
    }
}

void to_upper_case(std::ifstream& inFile, std::ofstream& outFile) {   
    int ch;
    while ((ch = inFile.get()) != EOF) {     
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a') + 'A';  
        }
        outFile.put(ch); 
    }
}

bool is_delim(int tmp) {
    if (tmp == '\n' || tmp == 9000 || tmp == '\t' || tmp == '\r' || tmp == ' ') {
        return true;
    }
    return false;
}

void title_case(std::ifstream& inFile, std::ofstream& outFile) { 
    enum class States {outside, inside};
    int ch;
    States state = States::outside;
    while ((ch = inFile.get()) != EOF) {      
        if (state == States::outside) {
            if (!is_delim(ch)) {
                if (ch >= 'a' && ch <= 'z') {
                    ch = (ch - 'a') + 'A';
                }
                state = States::inside;
            }
        }
        else {
            if (!is_delim(ch)) {
                if (ch >= 'A' && ch <= 'Z') {
                    ch = (ch - 'A') + 'a';
                }
            }
            else {
                state = States::outside;
            }
        }
        outFile.put(ch);
    }
}
