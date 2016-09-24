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
    vector<int> sequence;
    while(i <= 4000000){
        sequence.push_back(i);
        int temp = i;
        i += last;
        last = temp;
    }
    
    // Iterate through the sequence and total the even numbers
    int total = 0;
    for(int x = 0; x < sequence.size(); x++){
        if(sequence[x] % 2 == 0){
            total += sequence[x];
        }
    }
    // Give me that sugar!
    cout << total << "\n";
}
