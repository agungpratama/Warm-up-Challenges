#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

string timeConversion(string s) {
    string ampm = s.substr(s.size()-2,2);
    string hourStr = s.substr(0,2);
      int hourInt = stoi(hourStr); 
    if(ampm == "PM") {
        int newHour = hourInt;
        if(hourInt < 12) {
            newHour = hourInt + 12;

        }        
        string result = to_string(newHour) + s.substr(2, s.size()-4);
        return result;
    }else {
        if(hourInt == 12) {
            string result = "00" + s.substr(2, s.size()-4);
            return result;
        }
        return s.substr(0,s.size() - 2);
    }

    cout <<"AMPM is:" << ampm << endl;

    return "";
}

int main() {
    string input = "12:05:39AM";
    cout << endl << "result is: " << timeConversion(input);
}