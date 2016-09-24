//
//  main.cpp
//  2:Even Fibonacci numbers
//
//  Created by Dominic Valenciana on 9/24/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // Built out our fibonacci sequence up to 4 milllion
    int last = 0;
    int i = 1;
    int total = 0;
    while(i <= 4000000){

        int temp = i;
        i += last;
        if(i % 2 == 0){
            total += i;
        }
        last = temp;
    }
    
    // Give me that sugar!
    cout << total << "\n";
}
