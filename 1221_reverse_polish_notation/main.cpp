#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

int main(void) {
    int N; 
    cin >> N;
    stack<int> s;
    for(int i=0;i<N;++i) {
        char temp;
        cin >> temp;
        if(isdigit(temp)) {
            s.push((int)temp - '0');
        } else {
            if(temp == '+') {
                int k = s.top();
                s.pop();
                k += s.top();
                s.pop();
                s.push(k);
            }
            if(temp == '-') {
                int k = 0;
                k -= s.top();
                s.pop();
                k += s.top();
                s.pop();
                s.push(k);
            }
            if(temp == '*') {
                int k = s.top();
                s.pop();
                k *= s.top();
                s.pop();
                s.push(k);
            }
            if(temp == '/') {
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                s.push(a/b);
            }
        }
    }
    cout << s.top() << endl;

    return 0;
}
