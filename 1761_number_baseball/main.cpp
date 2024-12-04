#include <iostream>
using namespace std;

int overlap(int a, int b, int c) {
    if(a == b || b == c || c == a)
        return 1;
    else return 0;
}

int main(void) {
    int N;
    int Q[110], S[110], BALL[110];
    int A[110], B[110], C[110];
    int rst = 0;
    cin >> N;
    for(int i=0;i<N;++i) {
        cin >> Q[i] >> S[i] >> BALL[i];
        C[i] = Q[i] % 10;
        Q[i] /= 10;
        B[i] = Q[i] % 10;
        A[i] = Q[i] / 10;
    }

    for(int a=1;a<10;++a) {
        for(int b=1;b<10;++b) {
            for(int c=1;c<10;++c) {
                if(overlap(a, b, c)) continue;
                for(int i=0;i<N;++i) {
                    int strike=0, ball=0;
                    // Strike test
                    if(A[i] == a) ++strike;
                    if(B[i] == b) ++strike;
                    if(C[i] == c) ++strike;

                    // Ball test
                    if(A[i] == b || A[i] == c) ++ball;
                    if(B[i] == a || B[i] == c) ++ball;
                    if(C[i] == a || C[i] == b) ++ball;

                    if(strike != S[i] || ball != BALL[i])
                        break;
                    if(i == N-1)
                        ++rst;
                }
            }
        }
    }
    cout << rst;
}
