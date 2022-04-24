#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int pickingNumbers(vector<int> a) {
    map<int,int> frequencyMap;
    int result = 0;
    //fill the frequency map
    for (int i = 0; i < a.size(); i++) {
        frequencyMap[a[i]]++;
    }


    for(auto const& i : frequencyMap) {
        result = max(result, (i.second + frequencyMap[i.first -1]));
    }

    return result;
}

int main() {
    vector<int> input = {4,6,5,3,3,1};
    cout << endl << "result: " << pickingNumbers(input);
}