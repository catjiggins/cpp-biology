#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

int main()
{
    std::string dna;
    std::string complement = "";

    std::cout << "Enter DNA sequence: ";
    std::cin >> dna;
    for(char base : dna)
    {
        if(base == 'A') complement += 'T';
        else if(base == 'T') complement += 'A';
        else if(base == 'G') complement += 'C';
        else if(base == 'C') complement += 'G';
    }

    std::cout << "Complement strand: "
              << complement << std::endl;

    return 0;
  
}