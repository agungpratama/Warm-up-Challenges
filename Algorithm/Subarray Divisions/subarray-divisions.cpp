#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int birthday(vector<int> s, int d, int m) {
    int result = 0;

    int slidingWindowSum = 0;
    //fill the initial slidingWindow sum
    for(int i = 0; i < m; i++) {
        slidingWindowSum += s[i];
    }
    cout << "initial slidingWindow:" << slidingWindowSum << endl;
    if(slidingWindowSum == d) { result++;}
    for (int i = 1; i <= s.size() - m; i++) {
        int currWindowSum = slidingWindowSum - s[i-1] + s[i+m -1];
        cout << "currWindowSuM [" << i <<"]: " << currWindowSum << endl;
        if(currWindowSum == d) {
            result ++;
        }

        //slide the window
        slidingWindowSum = currWindowSum;
    }
    
    cout << result << endl;
    return result;
}



int main() {
    vector<int> input = {2,5,1,3,4,4,3,5,1,1,2,1,4,1,3,3,4,2,1};
    birthday(input,18,7);
}