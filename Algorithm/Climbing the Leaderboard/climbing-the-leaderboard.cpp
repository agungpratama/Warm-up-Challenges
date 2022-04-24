#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> result; 
    //lets store score as a stack
    stack<int> scores;
    //populate the scores to stack
    //we assume that the ranked is already sorted
    for(int i = 0; i < ranked.size(); i++) {
        if(scores.empty() || scores.top() != ranked[i]) {
            scores.push(ranked[i]);
        }
    }
    //populate the player score into the stack as well 
    for(int i = 0; i < player.size(); i++) {
        while(!scores.empty() &&  player[i] >= scores.top() ) {
            scores.pop();
        }

        result.push_back(scores.size() + 1);
    }

    //debug print
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return result;
}



int main() {
    vector<int> ranked = {100,100,50,40,40,20,10};
    vector<int> player = {5,25,50,120};
    climbingLeaderboard(ranked, player);
}