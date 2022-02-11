#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

//Link to problem: https://www.hackerrank.com/challenges/repeated-string/problem?isFullScreen

long long repeatedString(string s, long long n) {
    char charToCheck = 'a';
    long numberOfCharToCheckInPattern = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == charToCheck) {
            numberOfCharToCheckInPattern++;            
        } 
    }

    long long numberOfFullyRepeatedPattern = n / (long long) s.length();
    cout << "\nNumber of fully repeated pattern: " << numberOfFullyRepeatedPattern << "\n";
    long remainingLength =  n % s.length();
    cout << "remaining length: " << remainingLength << "\n";


    long numberOfCharToCheckInRemainingLength = 0;
    for(int i = 0; i < remainingLength; i++) {
        if(s[i] == charToCheck) {
            numberOfCharToCheckInRemainingLength++;            
        }  
    }
    return (numberOfFullyRepeatedPattern * numberOfCharToCheckInPattern) + numberOfCharToCheckInRemainingLength;
}

int main() {
    cout << "\n" << repeatedString("a", 1000000000000);


}