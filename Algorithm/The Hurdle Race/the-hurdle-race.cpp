#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int hurdleRace(int k, vector<int> height) {
    int result = 0;
    int maxHeight = INT_MIN;
    for(int i = 0; i < height.size(); i++) {
        maxHeight = max(maxHeight, height[i]);
    }

    result = max(maxHeight - k,0);
    return result;
}



int main() {
    vector<int> input = {1,6,3,5,2};
    int jumpCapability = 4;
    cout << hurdleRace(jumpCapability,input); 
}