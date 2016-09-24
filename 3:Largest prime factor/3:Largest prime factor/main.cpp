//
//  main.cpp
//  3:Largest prime factor
//
//  Created by Dominic Valenciana on 9/24/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
#include <math.h>
bool isPrime(long);
using namespace std;

int main(int argc, const char * argv[]) {
    
    long max = 600851475143;
    long limit = sqrt(max);
    
    // Start from the sqrt and work our way down to the answer.
    for( long i = limit; i > 0; i--){
        if( isPrime(i) && max % i == 0){
            cout << i << "\n";
            i = 0;
        }
    }

    return 0;
}

//Check if our number is a prime number or not in the quickest way possible.
bool isPrime(long num){
    if(num % 2 == 0){
        return false;
    }else if(num < 3){
        return false;
    }
    
    long upperLimit = sqrt(num);
    
    for( long i = 3; i <= upperLimit; i++ ){
        if(num % i == 0){
            return false;
        }
    }
    
    return true;
}
