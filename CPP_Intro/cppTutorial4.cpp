#include <iostream>
#include <set>
using namespace std;

int main() {
    string test = "This is a test iii jj j hgahs ll o";
    string find = "hello";
    set<char> findLetters;

    for(int i = 0; i < find.length(); i++){
        char letter = find[i];
        findLetters.insert(letter);
    }

    for(int i = 0; i < test.length(); i++) {
        char letter = test[i];
        findLetters.erase(letter);
    }

    if(findLetters.size() > 0) {
        cout << "No it does not have all the letters!";
    }
    else {
        cout << "It does have all of the letters";
    }

    // set<char> exists;

    // for(int i = 0; i < test.length(); i++){
    //     char letter = test[i];
    //     exists.insert(letter);
    // }

    // for(auto itr = exists.begin(); itr != exists.end(); itr++) {
    //     cout << *itr << endl;
    // }


    // set<char> s1 = {'C', 'D'};

    // s1.insert('B');

    // for(auto iter = s1.begin(); iter != s1.end(); iter++) {
    //     cout << *iter << endl;
    // }
}
