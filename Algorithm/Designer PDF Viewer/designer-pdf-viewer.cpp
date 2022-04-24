#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int result = 0;
    int tallest = INT_MIN;
    for(int i = 0; i < word.size(); i++) {
        cout << word[i] << " to: " << (int)word[i] - 97 << endl;

        tallest = max(tallest,h[(int)word[i] - 97]);
    }

    result = tallest * word.size();

    return result;
}


int main() {
    vector<int> input = {1,3,1,3,1,4,1,3,2,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
    string word = "abc";
    cout << designerPdfViewer(input,word); 
}