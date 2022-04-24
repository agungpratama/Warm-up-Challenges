#include <stdio.h>
#include <iostream>

using namespace std;

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {

    if(x==y) {return "Mouse C" ;}


    //if the mouse is on the left side line of the cats
    if(z < x && z < y) {
        return (x < y) ? "Cat A" : "Cat B";
    }else if(z > x && z > y) {
        return (x > y) ? "Cat A" : "Cat B";
    }else {
        //means it somewhere in between
        int ACdistance = abs(x-z);
        int BCdistance = abs(y-z);
        
        if(ACdistance==BCdistance){
             return "Mouse C";
        }
        else {
            return ACdistance < BCdistance ? "Cat A" : "Cat B";
        }

    }
}



int main() {
    cout << catAndMouse(1,2,3); 
}