#include <stdio.h>
#include <iostream>

using namespace std;

int utopianTree(int n) {
    int currHeight = 1;
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            currHeight = 1;
        }else if(i % 2 == 0) {
            currHeight++;
        }else {
            currHeight = currHeight * 2;
            
        }
    }
    return currHeight;
}


int main() {
    cout << utopianTree(5); 
}