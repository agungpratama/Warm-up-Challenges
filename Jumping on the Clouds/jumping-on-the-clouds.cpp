#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

//Link to problem: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?isFullScreen=true
int jumpingOnClouds(vector<int> c) {
    int jumpingCount = 0;
    
    for(int index = 0; index < c.size(); index++) {
        bool isNextNextCloudAvail = (c[index+2] == 0) && ((index+2) < c.size()) ? true : false;
        if (isNextNextCloudAvail) {
           //SKIP 2
            index++;
            jumpingCount++;
            continue;
        }else {
            bool isNextCloudAvail = (c[index+1] == 0) && (index+1 < c.size()) ? true : false;
            if (isNextCloudAvail) {
                //SKIP 1
                jumpingCount++;
                continue;
            }
        }
        
    }
    return jumpingCount;
}


int main() {
    cout << jumpingOnClouds({0,1,0,0,0,1,0});
    return 1;
}