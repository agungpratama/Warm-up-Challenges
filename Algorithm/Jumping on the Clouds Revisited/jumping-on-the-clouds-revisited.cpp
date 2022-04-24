#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int result = 100;

    int currPosition = 0;
    do {
        currPosition = (currPosition + k) % c.size();
        result--;
        cout << "jumping to position:" << currPosition << endl;
        if(c[currPosition] == 1) {
            result -= 2;
        }
    } while ( currPosition != 0 );

    return result;
}



int main() {  
    vector<int> input = {0, 0, 1, 0, 0, 1, 1, 0};
    cout << jumpingOnClouds(input, 2); 
}