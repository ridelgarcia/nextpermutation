#include "pch.h"
#include "next_permutation_function.h"
#include <algorithm>


void nextPermutation(std::vector<int>& vector) {

	// I can do the same only with this
	//std::next_permutation(vector.begin(), vector.end());
    //But this is the algorithm
        
    int n = vector.size(), i, j;
    for (i = n - 2; i >= 0 ; i--) {
        if (vector[i] < vector[i + 1]) {
            break;
        }
    }
    
    if (i < 0) {
        std::reverse(vector.begin(), vector.end());
    }
    else {
        for (j = n - 1; j > i; j--) {
            if (vector[j] > vector[i]) {
                break;
            }
        }
        std::swap(vector[i], vector[j]);
        std::reverse(vector.begin() + i + 1, vector.end());
    }
}