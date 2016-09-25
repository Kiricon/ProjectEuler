//
//  main.cpp
//  10:Summation of primes
//
//  Created by Dominic Valenciana on 9/25/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long num);

int main(int argc, const char * argv[]) {

    long max = 2000000;
    long total = 2;
    
    for(long i = 3; i < max; i+=2){
        if(isPrime(i)){
            total += i;
        }
    }
    cout << total << endl;
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
