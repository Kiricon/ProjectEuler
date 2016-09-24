//
//  main.cpp
//  6:Some square difference
//
//  Created by Dominic Valenciana on 9/24/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int sqSum = 0;
    int total = 0;
    int answer = 0;
    
    for( int i = 1; i <= 100; i++){
        
        sqSum += i*i;
        total += i;
    }
    
    total = total * total;
    
    answer = total - sqSum;
    
    cout << answer << '\n';
    
    
    return 0;
}
