#include <stdio.h>
#include <iostream>

using namespace std;

//https://www.hackerrank.com/challenges/counting-valleys/problem?isFullScreen=true

int countingValleys(int steps, string path) {

    int seaLevel = 0;
    int valleysCount = 0;
    bool isTraversingValley = false;
    // Traverse the string
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'D') {
            //going downwards
            seaLevel--;
            if (seaLevel == -1) {
                //start of valley
                isTraversingValley = true;
            }
        }else {
            //going upwards
            seaLevel++;
            if (seaLevel == 0) {
                //end of valley
                isTraversingValley = false;
                valleysCount++;
            }
        }
    } 

    return valleysCount;
}

int main() {
    cout << countingValleys(8,"UDDDUDUU");
}