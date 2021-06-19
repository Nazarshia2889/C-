#include <iostream>
using namespace std;

int main() {
    int a, v1, v2, t1, t2;
    cin >> a >> v1 >> v2 >> t1 >> t2;

    int timeOne = (a*v1)+(2*t1);
    int timeTwo = (a*v2)+(2*t2);

    if(timeOne < timeTwo) {
        cout << "First";
    }
    else if(timeOne > timeTwo) {
        cout << "Second";
    }
    else {
        cout << "Friendship";
    }
}