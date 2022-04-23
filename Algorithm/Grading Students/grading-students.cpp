#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> result;

    for (int i = 0; i < grades.size(); i++){
        if(grades[i] >= 38) {
            //rounded
            int rounded = grades[i] % 5;
            if(rounded < 3) {
                result.push_back(grades[i]);        
            }else {
                result.push_back(grades[i] + 5 - (grades[i] % 5));
            }
        }else {
            //no rounded
            result.push_back(grades[i]);
        }
    }

    return result;
}

int main() {
    vector<int> input = {73,67,38,33};
    gradingStudents(input);
}