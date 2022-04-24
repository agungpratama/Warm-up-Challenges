#include <stdio.h>
#include <iostream>

using namespace std;

int pageCount(int n, int p) {
    int result = 0;


    result = min( p/2, n/2-p/2);

    return result;
}


int main() {
    cout << pageCount(6,2); 
}