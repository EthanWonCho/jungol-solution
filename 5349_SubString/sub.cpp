#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(void) {
    string str;
    getline(cin, str);
    int strsize = str.size();
    queue<int> spaces;
    for(int i=0;i<strsize;++i) {
        if(str[i] == ' ') {
            spaces.push(i);
        }
    }
    string word[100];
    int ssize = spaces.size();
    word[0] = str.substr(0, spaces.front());
    for(int i=0;i<ssize;++i) {
        int prev = spaces.front();
        spaces.pop();
        word[i + 1] = str.substr(prev + 1, spaces.front() - prev - 1);
    }
    word[ssize + 1] = str.substr(spaces.front(), strsize - spaces.front());
    for(int i=ssize;i >= 0;i--) {
        if(i % 2) {
            cout << word[i] << " ";
        }
    }
    return 0;
}

