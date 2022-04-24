#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

string angryProfessor(int k, vector<int> a) {
    int notlateStudentsCount = 0;
    for (int i = 0; i < a.size(); i++) {
        if(a[i] <= 0 ) {
            notlateStudentsCount++;
        }
    }

    if(notlateStudentsCount >= k) {return "NO";}
    return "YES";
}



int main() {
    vector<int> input = {23,-35,-2,58,-67,-56,-42,-73,-19,37};
    cout << angryProfessor(10,input); 
}