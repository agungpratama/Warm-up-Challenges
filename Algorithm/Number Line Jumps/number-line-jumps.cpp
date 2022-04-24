#include <stdio.h>
#include <iostream>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if(x1 <= x2 && v1 < v2) {
        //means kangaroo 1 can't never catch up, because start further back and slower
        return "NO";
    } else if (x2 <= x1 && v2 < v1) {
        //means kangaroo 2 can't never catch up, because start further back and slower
        return "NO";
    }else {
        int deltaSpeed = abs(v2-v1);
        int deltaLocation = abs(x1-x2);        

        if(deltaSpeed == 0 && deltaLocation != 0) {
            //means has the same speed but start at different location, so it would never catch up
            return "NO";
        }

        if (deltaLocation % deltaSpeed != 0) {
            //means as long as the two kangaroo never stop they would never meet at the same exact spot
            return "NO";
        }

        return "YES";
    }
}


int main() {
    cout << kangaroo(21,6,47,3);
}