#include <iostream>
#include <stack>

using namespace std;

int main(void) {

    stack<int> ready;
    stack<int> washed;
    stack<int> done;

    int N, T;
    cin >> N >> T;
    for(int i=N;i>=1;--i) {
        ready.push(i);
    }
    for(int i=0;i<T;++i) {
        int C, D;
        cin >> C >> D;
        if(C == 1) {
            for(int j=0;j<D;++j) {
                washed.push(ready.top());
                ready.pop();
            }
        } else if(C == 2) {
            for(int j=0;j<D;++j) {
                done.push(washed.top());
                washed.pop();
            }
        }
    }
    for(int i=0;i<N;++i) {
        cout << done.top() << endl;
        done.pop();
    }
    return 0;
}
