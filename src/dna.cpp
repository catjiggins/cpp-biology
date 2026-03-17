#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include "dna.h"


std::string cDNA(const std::string& dna)
{
    std::string complement;

    for(char base : dna)
    {
        cDNA (dna) ;
        if(base == 'A') complement += 'T';
        else if(base == 'T') complement += 'A';
        else if(base == 'G') complement += 'C';
        else if(base == 'C') complement += 'G';
        §
        
    }
    return complement;
  
}


std::string validna(const std::string& dna)
    std::vector<char> validdna = { 'A', 'T', 'G', 'C', };
    std::vector<char> validrna = { 'A', 'U', 'G', 'C' };
    for(char base : dna)
    {  
        if(std::none_of(validdna.cbegin(), validdna.cend(),
                        [base](char p){ return p == base; })) 
        if (std::none_of(validrna.cbegin(), validrna.cend(),
                        [base](char p){ return p == base; }))                
                        {
            
        }
    }