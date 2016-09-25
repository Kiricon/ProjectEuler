//
//  main.cpp
//  9:Special Pythagorean triplet
//
//  Created by Dominic Valenciana on 9/25/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void findPythag(int);
bool isPythag(int, int, int);

int main(int argc, const char * argv[]) {
    
    findPythag(1000);
    return 0;
}


void findPythag(int max){
    
    for(int a = 0; a  < max; a++ ){
        for(int b = 0; b < max; b++){
            for(int c = 0; c < max; c++){
                
                if(a !=b && b != c && c != a && isPythag(a, b, c)){
                    if(a+b+c == max){
                        cout << a*b*c << endl;
                    }
                }
                
                
                
            }
        }
    }
}

bool isPythag(int a, int b, int c){
    int as, bs, cs;
    
    as = a*a;
    bs = b*b;
    cs = c*c;
    
    return as+bs == cs;
}
