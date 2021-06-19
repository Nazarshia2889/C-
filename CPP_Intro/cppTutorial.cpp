#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple <int, char> t1(20, 'T');
    tuple <char, string> t2('R', "Hello World!");
    auto t3 = tuple_cat(t1, t2);
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    cout << get<2>(t3) << endl;
    cout << get<3>(t3) << endl;
}
