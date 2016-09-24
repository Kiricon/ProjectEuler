//
//  main.cpp
//  5:Smallest multiple
//
//  Created by Dominic Valenciana on 9/24/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    int max = 20;
    int i = max;
    bool loop = true;
    int answer = 0;
    
    //Loop through all multiple so 20.
    //20 is the smallest multiple it could be.
    while(loop){
        int divis = 0;
        for(int d = 1; d <= max; d++){
            if( i % d == 0){
                divis++;
            }
        }
        // If it was divisble by all 20 then stop the loop
        if(divis == max){
            loop = false;
            answer = i;
        }
        
        i += max;
    }
    
    cout << answer << "\n";
    
    return 0;
}
