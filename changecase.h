#include <fstream>

void toggle_case(std::ifstream& inFile, std::ofstream& outFile);
void to_lower_case(std::ifstream& inFile, std::ofstream& outFile);
void to_upper_case(std::ifstream& inFile, std::ofstream& outFile);
bool is_delim(int tmp);
void title_case(std::ifstream& inFile, std::ofstream& outFile);
