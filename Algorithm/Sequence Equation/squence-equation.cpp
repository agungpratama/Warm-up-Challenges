#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> permutationEquation(vector<int> p) {
    map<int,int> indexMap;
    vector<int> result;

    //fill the map first
    for (int i = 0; i < p.size(); i++) {
        indexMap[p[i]] = i+1;
    }

    for(int i = 1; i <= p.size(); i++) {
        result.push_back(indexMap[indexMap[i]]);
    }


    //debug print
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return result;
}


int main() {  
    vector<int> input = {5,2,1,3,4};
    permutationEquation(input); 
}