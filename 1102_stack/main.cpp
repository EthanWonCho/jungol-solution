#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    stack<int> s;
    char c;
    int n;
    cin >> n;
    for(int i=0;i<n;++i) {
        cin >> c;
        if(c == 'i') {
            int j;
            cin >> j;
            s.push(j);
        }else if(c == 'c') {
            cout << s.size() << endl;
        }else if(c == 'o') {
            if(!s.empty()){
                cout << s.top() << endl;
                s.pop();
            } else
                cout << "empty" << endl;
        }
    }
    return 0;
}

