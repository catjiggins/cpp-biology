#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 

std::string cDNA(const std::string& dna);
int main()
{
    std::string dna;
    std::string complement = "";

    std::cout << "Enter DNA sequence: ";
    std::cin >> dna;
    
    std::string result = validna(dna);
        std::cout << "Invalid nucleotide found: " << base << std::endl;
            return 1; 
    

    std::string result = cDNA(dna);
    std::cout << "Complement strand: "
              << complement << std::endl;

    return 0;
    
}
