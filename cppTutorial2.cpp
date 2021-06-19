#include <iostream>
#include <map>
using namespace std;

int main() {
    string test = "hello world my name is Arshia! ttthhaaa";

    map<char, int> freq;

    for(int i = 0; i < test.length(); i++){
        char letter = test[i];
        if (freq.find(letter) == freq.end()) {
            freq[letter] = 0;
        }
        
        freq[letter]++;
    }
    for(auto itr = freq.begin(); itr != freq.end(); itr++){
        cout << itr->first << ": " << itr->second << endl;
    }



    // map<char, int> mp = {
    //     {'T', 7},
    //     {'S', 8},
    //     {'a', 4}
    // };
    // mp['u'] = 9;
    // pair<char, int> p1('j', 5);
    // mp.insert(p1);
    
    // for (auto itr = mp.begin(); itr != mp.end(); itr++){
    //     cout << itr->first << endl;
    //     cout << itr->second << endl;
    // }
}