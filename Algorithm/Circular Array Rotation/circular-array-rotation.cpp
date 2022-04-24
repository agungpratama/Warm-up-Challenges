#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> result; 
    int effectiveRotation = k % a.size();
    map<int,int> newIndexToOldIndexMap;

    cout << "size array input is " << a.size() << endl;
    cout << "rotates " << k << " times" << endl;
    cout << "which means is exactly the same like being rotated " << effectiveRotation << " times" << endl; 

    for(int i = 0; i < a.size(); i++) {
        newIndexToOldIndexMap[(i + k) % a.size()] = i;
    }

    for (int i = 0; i < queries.size(); i++) {
        int query = queries[i];
        result.push_back(a[newIndexToOldIndexMap[query]]);
    }


    //debug result
    cout << endl << "--------" << endl;
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return result;
}



int main() {  
    vector<int> input = {3,1,2};
    int rotation = 1;
    vector<int> queries = {0,1,2};
    circularArrayRotation(input,rotation,queries); 
}