#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int simpleArraySum(vector<int> ar) {
    int result = 0;

    for (int i = 0; i < ar.size(); i++) {
        result += ar[i];
    }

    return result;
}

int main() {
    vector<int> input = {3,2,1,3};
    simpleArraySum(input);
}