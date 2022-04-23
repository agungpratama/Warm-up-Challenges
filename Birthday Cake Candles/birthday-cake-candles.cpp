#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    map<int,int> candleFrequencies;
    int tallestCandleYear = 0;

    for(int i = 0; i < candles.size(); i++) {
        candleFrequencies[candles[i]]++;
        tallestCandleYear = max(candles[i],tallestCandleYear);
    }

    cout << "tallest candles year: " << tallestCandleYear << endl;
    cout << "tallest candles' frequency: " << candleFrequencies[tallestCandleYear] << endl;

    return candleFrequencies[tallestCandleYear];
}
int main() {
    vector<int> input = {3,2,1,3};
    birthdayCakeCandles(input);
}