#include <iostream>
using namespace std;

// int add(int x, int y){
//     return x + y;
// }

// pair<int, int> makePair(int x, int y) { 
//     return pair<int, int>(x, y);
// }

// void swap(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 2;
    int b = 4;
    cout << a << endl;
    cout << b << endl;
    cout << "Swapping" << endl;
    swap(&a, &b);
    cout << a << endl;
    cout << b << endl;

    // int result = add(2, 3);
    // cout << result << endl;
    // cout << makePair(3, 4).first;
}
