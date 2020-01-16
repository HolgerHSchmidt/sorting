//
//  InsertionSortTests.m
//  Tests
//
//  Created by Holger Schmidt on 15.01.20.
//  Copyright © 2020 Holger Schmidt. All rights reserved.
//

#import <XCTest/XCTest.h>

#include "../sorting/insertionsort.hpp"
#include <iterator>

using namespace std;

@interface InsertionSortTests : XCTestCase

@end

@implementation InsertionSortTests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)test_2_sortedASC {
    int a[] = {1,2};
    
    insertionsort(std::begin(a), std::end(a));
    
    XCTAssertEqual(1, a[0]);
}

- (void)test_2_sortedDESC {
    int a[] = {2,1};
    
    insertionsort(std::begin(a), std::end(a));
    
    XCTAssertEqual(1, a[0]);
}

- (void)test_3_sortedASC {
    int a[] = {1,2,3};
    
    insertionsort(std::begin(a), std::end(a));
    
    XCTAssertEqual(1, a[0]);
}

- (void)test_3_sortedDESC {
    int a[] = {3,2,1};
    
    insertionsort(std::begin(a), std::end(a));
    
    XCTAssertEqual(1, a[0]);
    XCTAssertEqual(2, a[1]);
}

- (void)test_3_unsorted {
    int a[] = {2,3,1};
    
    insertionsort(std::begin(a), std::end(a));
    
    XCTAssertEqual(1, a[0]);
    XCTAssertEqual(2, a[1]);
}

- (void)test_4_unsorted {
    int a[] = {2,4,3,1};
    
    insertionsort(std::begin(a), std::end(a));
    
    XCTAssertEqual(1, a[0]);
    XCTAssertEqual(2, a[1]);
}

- (void)test_4_sortedASC {
    int a[] = {1,2,3,4};
    
    insertionsort(std::begin(a), std::end(a));
    
    XCTAssertEqual(1, a[0]);
    XCTAssertEqual(2, a[1]);
}

- (void)test_4_sortedDESC {
    int a[] = {4,3,2,1};
    
    insertionsort(std::begin(a), std::end(a));
    
    XCTAssertEqual(1, a[0]);
    XCTAssertEqual(2, a[1]);
}

@end
