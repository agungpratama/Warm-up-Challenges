#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int sockMerchant(int n, vector<int> ar) {

    map<int,int> pairMap;
    int pairCount = 0;

    for (int index = 0; index < ar.size(); index++) {
        int curr = ar[index];
        if (pairMap.count(curr)) {
            pairMap.erase(curr);
            pairCount++;
        }else {
            pairMap[curr] = index;
        }

        cout << curr << " \n"; 
    }
        
    return pairCount;
}

int main() {   
    cout << sockMerchant(9, {10,20,20,10,10,30,50,10,20});
}
