#include <iostream>

using namespace std;

int fibo[30] = {0, 1, 1};

int calc_fibo(int n) {
    if(n <= 2) return 1;
    if(fibo[n] > 0) return fibo[n];
    return fibo[n] = calc_fibo(n-1) + calc_fibo(n-2);
}

int main(void) {
    int D, K;
    cin >> D >> K;
    int a, b;
    calc_fibo(D);
    for(a=1;a<K;++a) {
        if(!((K - fibo[D-2] * a) % fibo[D-1])){
            b = (K - fibo[D-2] * a) / fibo[D-1];
            break;
        }
    }
    cout << a << endl << b << endl;
    return 0;
}

