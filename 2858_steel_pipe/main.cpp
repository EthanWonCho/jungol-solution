#include <iostream>
using namespace std;

int main(void) {
    char input[100010];
    int stack = 0, rst = 0;
    cin >> input;
    for(int i=0;input[i];++i) {
        if(input[i] == '(') {
            if(input[i+1] == ')') {
                rst += stack;
                ++i;
            } else {
                ++stack;
            }
        } else {
            --stack;
            ++rst;
        }
    }
    cout << rst << endl;
    return 0;
}

