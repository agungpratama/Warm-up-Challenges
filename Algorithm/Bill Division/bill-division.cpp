#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {

    int sum = 0;
    for (int i = 0; i < bill.size(); i++) {
        if(i != k) {
            sum += bill[i];
        }
    }

    int gap = abs(sum /2  - b);
    if(gap == 0) {
        cout << "Bon Appetit" << endl;
    }else {
        cout << gap << endl;
    }


}


int main() {
    vector<int> input = {3,10,2,9};
    bonAppetit(input, 1, 7);
}