#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    map<int, int> bucket;
    int result;
    //fill the map
    for (int i = 0; i < ar.size(); i++) {
        int remainder = ar[i] % k;
        int complement = remainder == 0 ? k : remainder;
        result += bucket[k-complement];
        bucket[remainder]++;
    }

    cout << "result: " << result << endl;
    return result;
}



int main() {
    vector<int> input = {1, 3, 2, 6, 1, 2};
    divisibleSumPairs(6,3,input);
}