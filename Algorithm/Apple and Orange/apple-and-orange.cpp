#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int numberOfApplesIn = 0;
    int numberOfOrangesIn = 0;

    for(int i = 0; i < apples.size(); i++) {
        int appleDropLocation = apples[i] + a ;
        //cout << "appleDropLocation: " << appleDropLocation << endl;
        if(appleDropLocation >= s && appleDropLocation <= t) {
            numberOfApplesIn++;
        }
    }

    for(int i = 0; i < oranges.size(); i++) {
        int orangeDropLocation = oranges[i] + b;
        //cout << "orangeDropLocation: " << orangeDropLocation << endl;
        if(orangeDropLocation > s && orangeDropLocation < t) {
            numberOfOrangesIn++;
        }

    }

    cout << numberOfApplesIn << endl;
    cout << numberOfOrangesIn << endl;
}

int main() {
    int startHouse = 7;
    int endHouse = 11;
    int appleTree = 5;
    int orangeTree = 15;

    vector<int> apples = {-2, 2, 1};
    vector<int> oranges = {5,-6};
    

    countApplesAndOranges(startHouse, endHouse,appleTree,orangeTree, apples,oranges);
}