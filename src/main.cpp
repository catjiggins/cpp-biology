#include <iostream>
#include "dna.h"

int main()
{
    std::string dna;

    std::cout << "Enter DNA or RNA sequence: ";
    std::cin >> dna;

    if(validna(dna))
    {
        std::string resultDNA = cDNA(dna);

        std::cout << "Complement DNA strand: "
                  << resultDNA << std::endl;
   
        std::string resultRNA = cRNA(dna);

        std::cout << "Complement RNA strand: "
                  << resultRNA  << std::endl;
    }
    else
    {
        std::cout << "Invalid nucleotide found in the DNA sequence."
                  << std::endl;
    }

    return 0;
}