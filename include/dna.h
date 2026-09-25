#ifndef DNA_H
#define DNA_H
#include <string>

std::string cDNA(const std::string& dna);
std::string cRNA(const std::string& dna);
bool validDNA(const std::string& dna);
std::string aminoDNA(const std::string& complementRNA);
std::string startCODON(const std::string& complementRNA);

#endif