#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int beautifulDays(int i, int j, int k) {
    int result = 0;

    for(int counter = i; counter <= j; counter++) {
        cout << counter << endl;

        int remainder = 0 , reversed_number = 0 , n = counter; 
        while(n != 0) {
            remainder = n % 10;
            reversed_number = reversed_number * 10 + remainder;
            n /= 10;
        }
        cout << counter << " is reversed to " << reversed_number << endl;

        int gap = abs(counter - reversed_number);
        if (gap % k == 0) {
            result++;
        }

    }

    return result;
}



int main() {
    
    cout << beautifulDays(20,23,6); 
}