#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    queue<int> q;
    for(int i=0;i<N;++i) {
        char cmd;
        cin >> cmd;
        if(cmd == 'i') {
            int k;
            cin >> k;
            q.push(k);
        } else if(cmd == 'o') {
            if(!q.size()) {
                cout << "empty" << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        } else if(cmd == 'c') {
            cout << q.size() << endl;
        }
    }
}
