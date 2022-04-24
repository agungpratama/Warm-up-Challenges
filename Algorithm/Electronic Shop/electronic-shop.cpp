#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

//not using sort, O(n*m)
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
    int totalSpendPossible = -1;
    for (int i = 0; i < keyboards.size(); i++) {
        for(int j = 0; j < drives.size(); j++) {
            int pairingPrice = (keyboards[i] + drives[j]);
            if( pairingPrice > totalSpendPossible && pairingPrice <= b) {
                totalSpendPossible = pairingPrice;
            }
        }
    }

    return totalSpendPossible;
}


int main() {
    vector<int> input = {3,1};
    vector<int> input2 = {5,2,8};
    int money = 10;

    getMoneySpent(input,input2,money); 
}

