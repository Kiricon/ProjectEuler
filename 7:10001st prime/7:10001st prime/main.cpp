//
//  main.cpp
//  7:10001st prime
//
//  Created by Dominic Valenciana on 9/24/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
#include <math.h>
bool isPrime(long num);
using namespace std;

int main(int argc, const char * argv[]) {
    
    long primeIndex = 1, i = 3, answer = 0;
    
    while(primeIndex < 10001){
        if(isPrime(i)){
            primeIndex++;
            answer = i;
        }
        
        i += 2;
    }
    
    
    cout << answer << endl;
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
