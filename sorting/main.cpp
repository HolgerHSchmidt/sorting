//
//  main.cpp
//  sorting
//
//  Created by Holger Schmidt on 15.01.20.
//  Copyright © 2020 Holger Schmidt. All rights reserved.
//

#include <chrono>
#include <iostream>
#include <algorithm>
#include "insertionsort.hpp"

int main(int argc, const char * argv[]) {
    int a[] = {46,71,97,79,25,62,50,30,1,74,72,26,85,12,98,45,46,73,44,6,92,30,
        43,36,19,97,26,71,9,29,42,10,31,39,30,62,43,78,1,33,96,1,82,95,39,90,57,
        47,99,89,57,29,23,89,49,52,30,8,5,55,4,57,46,100,6,72,44,42,33,14,61,46,
        75,20,84,68,15,12,62,23,25,15,68,8,41,5,11,97,51,71,83,3,3,5,27,16,25,21,81,90};
    
    auto t1 = std::chrono::high_resolution_clock::now();
    insertionsort(std::begin(a), std::end(a));
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    
    std::cout << "insertionsort: " << duration << "us\n";
    
    t1 = std::chrono::high_resolution_clock::now();
    std::sort(std::begin(a), std::end(a));
    t2 = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    
    std::cout << "std::sort: " << duration << "us\n";
    
    return 0;
}
