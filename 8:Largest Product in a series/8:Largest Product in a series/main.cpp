//
//  main.cpp
//  8:Largest Product in a series
//
//  Created by Dominic Valenciana on 9/25/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<string> readFile();
void findLargest(vector<string>);

int main(int argc, const char * argv[]) {
    
    findLargest(readFile());

    
    return 0;
}


void findLargest(vector<string> numbers){
    
    long allTotal = 0;
    string allNumbers = "";
    for(int n = 0; n < numbers.size(); n++){
        allNumbers += numbers[n];
    }

        //Step through every set of 13 consecutive numbers;
        for(int i = 0;  i < allNumbers.length() - 12; i++){
            long total = 1;
            
            //Step through the characters in the 13 numbers;
            int z = 0;
            for(int x = i; x < i+13; x++){
                int num = allNumbers[x] - '0';
                total *= num;
                z++;
            }
           // cout << z;
            
            
            if(total > allTotal){
                allTotal = total;
            }
            
        }

    
    cout << allTotal << endl;
    
}

vector<string> readFile(){
    
    vector<string> numbers;
    
    ifstream file("input.txt");
    string str;
    while (getline(file, str))
    {
        // Process str
        numbers.push_back(str);
    }
    
    return numbers;
}
