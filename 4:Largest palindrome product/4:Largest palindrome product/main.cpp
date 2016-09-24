//
//  main.cpp
//  4:Largest palindrome product
//
//  Created by Dominic Valenciana on 9/24/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

bool isPalin(int);

using namespace std;

int main(int argc, const char * argv[]) {
    
    int max = 999;
    vector<int> all;
    
    for(int i = max; i > 99; i--){
        for(int x = max; x >99 ; x--){
            
            int product = (i * x);
            if(isPalin(product)){
                all.push_back(product);
            }
            
        }
    }
    
    int largest = 0;
    for(int i = 0; i < all.size(); i++){
        if(all[i] > largest){
            largest = all[i];
        }
    }
    
    cout << largest << '\n';
     
    //cout << isPalin(4804) << '\n';
    return 0;
}

bool isPalin(int num){
    
    string original, palin;
    
    original = to_string(num);
    palin = original;
    reverse(palin.begin(), palin.end());
    
    //cout << original << " : "<< palin << '\n';
    
    return original == palin;
}
