#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int pass = 0;
    int silverCoins = 0;
    int coord[] = {0, 0};
    bool bottom;
    bool previous;

    for(int i = 0; i < n; i++) {
        char m = s[i];
        if(m == 'U') {
            coord[1]++;
        }
        else if(m == 'R') { 
            coord[0]++;
        }
        if(coord[0] > coord[1]) {
            bottom = true;
        }
        else if(coord[0] < coord[1]) {
            bottom = false;
        }
        if((coord[0] == 0 && coord[1] == 1) || (coord[0] == 1 && coord[1] == 0)) {
            previous = bottom;
        }
        if(bottom != previous) {
            previous = bottom;
            silverCoins++;
        }
    }
    cout << silverCoins;
}