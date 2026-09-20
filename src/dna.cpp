#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <map>
#include "dna.h"


std::string cDNA(const std::string& dna)
{
    std::string complement;

    for(char base : dna)
    { 

        if(base == 'A') complement += 'T';
        else if(base == 'T') complement += 'A';
        else if(base == 'G') complement += 'C';
        else if(base == 'C') complement += 'G';  
    }
    return complement ;
}

std::string cRNA(const std::string& dna)
{
    std::string complementRNA ;

    for(char base : dna)
    { 

        if(base == 'A') complementRNA += 'U';
        else if(base == 'T') complementRNA += 'A';
        else if(base == 'G') complementRNA += 'C';
        else if(base == 'C') complementRNA += 'G';  
    }   
    return complementRNA ;
}


bool validDNA(const std::string& dna)
{
    std::vector<char> validdna = { 'A', 'T', 'G', 'C' };
    std::vector<char> validrna = { 'A', 'U', 'G', 'C' };
    
    for(char base : dna)
    {  
        if(std::none_of(validdna.cbegin(), validdna.cend(),
                        [base](char p){ return p == base; }) &&
           std::none_of(validrna.cbegin(), validrna.cend(),
                        [base](char p){ return p == base; }))                
        {
            return false;
        }
    }    
    return true;
}




std::map < std::string, std::string> codonTABLE = 
{
    {"AUG", "Met"},
    };

std::string aminoDNA(const std::string& complementRNA)
{
    std::string aminoAcid;
    for ( int i = 0; i < complementRNA .size(); i += 3)
    {  
        std::string codon = complementRNA.substr(i, 3);
        auto it = codonTABLE.find(codon);
        if(it != codonTABLE.end())
        {
            aminoAcid += it->second + " ";
        }
    }
    return aminoAcid;
}


