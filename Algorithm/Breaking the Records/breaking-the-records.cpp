#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int currMin = INT_MAX;
    int currMax = INT_MIN;
    int breakMinCount = -1;
    int breakMaxCount = -1;


    for (int i = 0; i < scores.size(); i++) {
        if(scores[i] < currMin) {
            currMin = scores[i];
            breakMinCount++;
        }
        if(scores[i] > currMax) {
            currMax = scores[i];
            breakMaxCount++;
        }
    }
    cout << breakMaxCount << " " << breakMinCount;
    return {breakMaxCount,breakMinCount};
}

int main() {
    vector<int> input = {3,4,21,36,10,28,35,5,24,42};
    breakingRecords(input);
}