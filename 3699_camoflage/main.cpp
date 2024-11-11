#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main(void) {
    int case_n;
    cin >> case_n;
    for(int integer_for_nothing=0;integer_for_nothing < case_n;++integer_for_nothing) {
    
    int fuku_kazu;
    map<string, int> m;
    cin >> fuku_kazu;

    for(int i=0;i<fuku_kazu;++i) {
        char acc[30], part[30];
        cin >> acc >> part;
        if(m.find(part) != m.end()) {
            m[part]++;
        }else {
            m.insert({part, 1});
        }
    }
    int rst = 1;
    for(auto iter = m.begin();iter != m.end();iter++) {
        rst *= iter->second + 1;
    }
    rst -= 1;
    cout << rst << endl;
    }
    return 0;
}
