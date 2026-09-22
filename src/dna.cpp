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
    {"UUU", "Phe"},
    {"UUC", "Phe"},
    {"UUA", "Leu"},
    {"UUG", "Leu"},
    {"CUU", "Leu"},
    {"CUC", "Leu"},
    {"CUA", "Leu"},
    {"CUG", "Leu"},
    {"AUU", "Ile"},
    {"AUC", "Ile"},
    {"AUA", "Ile"},
    {"GUU", "Val"},
    {"GUC", "Val"},
    {"GUA", "Val"},
    {"GUG", "Val"},
    {"UCU", "Ser"},
    {"UCC", "Ser"},
    {"UCA", "Ser"},
    {"UCG", "Ser"},         
    {"CCU", "Pro"},
    {"CCC", "Pro"},
    {"CCA", "Pro"},
    {"CCG", "Pro"},
    {"ACU", "Thr"},
    {"ACC", "Thr"},
    {"ACA", "Thr"},
    {"ACG", "Thr"},
    {"GCU", "Ala"},
    {"GCC", "Ala"},
    {"GCA", "Ala"},
    {"GCG", "Ala"},
    {"UAU", "Tyr"},
    {"UAC", "Tyr"},
    {"CAU", "His"},
    {"CAC", "His"},
    {"CAA", "Gln"},
    {"CAG", "Gln"},
    {"AAU", "Asn"},
    {"AAC", "Asn"},
    {"AAA", "Lys"},
    {"AAG", "Lys"},
    {"GAU", "Asp"},
    {"GAC", "Asp"},
    {"GAA", "Glu"},
    {"GAG", "Glu"},                             
    {"UGU", "Cys"},
    {"UGC", "Cys"},
    {"UGG", "Trp"},
    {"CGU", "Arg"},
    {"CGC", "Arg"},
    {"CGA", "Arg"},
    {"CGG", "Arg"},
    {"AGU", "Ser"},
    {"AGC", "Ser"},
    {"AGA", "Arg"},
    {"AGG", "Arg"},
    {"GGU", "Gly"},
    {"GGC", "Gly"},
    {"GGA", "Gly"},
    {"GGG", "Gly"},
    {"UAA", "Stop"},
    {"UAG", "Stop"},    
    {"UGA", "Stop"} 
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


