#include <stdio.h>
#include <iostream>

using namespace std;

int viralAdvertising(int n) {
    int result = 0;
    int shared = 5;
    for (int i = 1; i <= n; i++) {
        if(i == 1) {
            //initial only
            shared = 5;
        }else {
            shared = (shared / 2) * 3;
        }
        result += (shared / 2);
    }
    return result;
}




int main() {  
    cout << viralAdvertising(3); 
}