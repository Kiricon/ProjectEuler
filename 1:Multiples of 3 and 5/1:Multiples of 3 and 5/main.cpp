//
//  main.cpp
//  1:Multiples of 3 and 5
//
//  Created by Dominic Valenciana on 9/24/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int total = 0;
    for(int i = 0; i < 1000; i++){
        if( i % 3 == 0 || i % 5 == 0){
            total += i;
        }
    }
    cout << total << '\n';
    return 0;
}
