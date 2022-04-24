#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int migratoryBirds(vector<int> arr) {
    int highestSeenCount = 0;
    map<int,int> frequencyMap;
    int lowestHighestSendID = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        frequencyMap[arr[i]]++;
        cout << "frequency of ID[" << arr[i] << "]: " << frequencyMap[arr[i]] << endl;
        if(frequencyMap[arr[i]] == highestSeenCount) {
            lowestHighestSendID = min(lowestHighestSendID,arr[i]);
            cout << "lowestHighestSendID: " << lowestHighestSendID<< endl;            
        }else if(frequencyMap[arr[i]] > highestSeenCount) {
            cout << "highest seend frequency has changed" << endl;
            highestSeenCount = frequencyMap[arr[i]];
            lowestHighestSendID = arr[i];
        }
 
    }
    cout << "lowestHighestSendID: " << lowestHighestSendID << endl; 
    return lowestHighestSendID;
}



int main() {
    vector<int> input = {1,4,4,4,5,3}; //{1,2,3,4,5,4,3,2,1,3,4};
    migratoryBirds(input);
}