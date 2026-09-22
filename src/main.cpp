#include <iostream>
#include "dna.h"
#include <cctype>

int main()
{
    std::string dna;

    std::cout << "Enter DNA sequence: ";
    std::cin >> dna;

    for (char& base : dna)
{
    base = std::toupper(base);
}
    if(validDNA(dna))
    {
        std::string resultDNA = cDNA(dna);

        std::cout << "Complement DNA strand: "
                  << resultDNA << std::endl;
   
        std::string resultRNA = cRNA(dna);

        std::cout << "Complement RNA strand: "
                  << resultRNA  << std::endl;

        std::string aminoAcid = aminoDNA(resultRNA);
        std::cout << "Amino Acid sequence: "
                  << aminoAcid << std::endl;
    }
    else
    {
        std::cout << "Invalid nucleotide found in the DNA sequence."
                  << std::endl;
    }

    return 0;
}