#include <iostream>
#include <queue>

using namespace std;

int main() {
    int P, N, rst = 0;
    queue<int> price[60];
    cin >> P >> N;
    for(int i=0;i<N;++i) {
        int cmd, p, m;
        cin >> cmd;
        if(!cmd) {
            cin >> p >> m;
            price[p].push(m);
        } else {
            cin >> p;
            if(!price[p].empty()) {
                rst += price[p].front();
                price[p].pop();
            }
        }
    }
    cout << rst << endl;
    return 0;
}
