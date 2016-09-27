//
//  main.cpp
//  11:Largest product in a grid
//
//  Created by Dominic Valenciana on 9/26/16.
//  Copyright © 2016 Dominic Valenciana. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

vector<int> split(string str, string sep);
vector<vector<int> > readFile();

int main(int argc, const char * argv[]) {

    vector<vector<int> > grid = readFile();
    int nums = 4;
    long answer = 0;
    
    // read horizontal
    for(int r = 0; r < grid.size(); r++){
        for(int i = 0; i < grid[r].size()-nums; i++){
            
            long product = 1;
            for(int c = i; c < i+4; c++){
                product *= grid[r][c];
            }
            if(product > answer){
                answer = product;
            }
        }
    }
    
    
    cout << answer;
    
    return 0;
}

//####### Split ######
vector<int> split(string str, string sep){
    char* cstr=const_cast<char*>(str.c_str());
    char* current;
    vector<int> arr;
    current=strtok(cstr,sep.c_str());
    while(current != NULL){
        arr.push_back(atoi(current));
        current=strtok(NULL, sep.c_str());
    }
    return arr;
}

//#### Read File ######
vector<vector<int> > readFile(){
    
    vector<vector<int> > numbers;
    vector<string> b;
    
    ifstream file("input.txt");
    string str;
    while (getline(file, str))
    {
        // Process str
        b.push_back(str);
    }
    
    b;
    return numbers;
}
