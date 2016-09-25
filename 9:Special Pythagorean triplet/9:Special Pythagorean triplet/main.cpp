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

int findPythag(int);
bool isPythag(int, int, int);

int main(int argc, const char * argv[]) {
    
    findPythag(1000);
    return 0;
}


int findPythag(int max){
    
    for(int a = 0; a  < max; a++ ){
        for(int b = 0; b < max-a; b++){
            for(int c = 0; c < max-b; c++){
                
                if(a !=b && b != c && c != a && isPythag(a, b, c)){
                    if(a+b+c == max){
                        cout << a*b*c << endl;
                        return 1;
                    }
                }
                
                
                
            }
        }
    }
    return 0;
}

bool isPythag(int a, int b, int c){
    int as, bs, cs;
    
    as = a*a;
    bs = b*b;
    cs = c*c;
    
    return as+bs == cs;
}
