#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include "next_permutation_function.h"

void printVector(const std::vector<int>& vector) {
    for (std::vector<int>::const_iterator i = vector.begin(); i != vector.end(); ++i) {
        std::cout << *i << " ";        
    }
}
int main()
{   
    std::cout << "Introduce a array of numbers in the same line separated by white spaces or press enter to exit" << std::endl;
    std::string inputLine;
    while (getline(std::cin, inputLine)) {
        std::vector<int> numbers;
        if (inputLine == "")
            break;
        int number;
        std::stringstream stringstream(inputLine);
        while (stringstream >> number) {
            numbers.push_back(number);
        }
        nextPermutation(numbers);
        std::cout << "Next permutation is: ";
        printVector(numbers);
        std::cout << std::endl;
    }

    return 0;
}

