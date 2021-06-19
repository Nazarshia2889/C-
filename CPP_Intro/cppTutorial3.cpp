#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    
    for(int i = 0; i < v1.size();i++){
        cout << v1[i] << endl;
    }
    v1.insert(v1.begin(), 10);
    for(auto itr = v1.begin(); itr != v1.end(); itr++){
        cout << *itr << endl;
    }
}
