//
//  insertionsort.h
//  simple insertion sort without binary search of insert position in sorted area
//  complexitiy: O(N^2)
//  very slow for unsorted input
//
//  Created by Holger Schmidt on 15.01.20.
//  Copyright © 2020 Holger Schmidt. All rights reserved.
//

#ifndef insertionsort_h
#define insertionsort_h

#include <functional>

template <class RandomIt>
void insertionsort(RandomIt start, RandomIt end) {
    if (start == end)
        return;
    
    auto it = start;
    auto next = start;
    ++next;
    
    for (; next != end; ++next, ++it)
    {
        if (*it < *next)
            continue;
        
        auto swapit = next;
        auto swapprevit = it;
        do {
            using std::swap;
            swap(*swapprevit, *swapit);
            --swapit;
            --swapprevit;
        } while (swapit != start && !(*swapprevit < *swapit));
    }
}



#endif /* insertionsort_h */
