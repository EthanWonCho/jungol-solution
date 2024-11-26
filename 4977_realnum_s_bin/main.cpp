#include <iostream>

using namespace std;

int int_conv(int int_N) {
    if(int_N <= 0) {
        return 0;
    }
    return int_conv(int_N / 2) * 10 + int_N % 2;
}

int double_conv(double N) {
    int rst = 0;
    for(int i=0;i<4;++i) {
        rst *= 10;
        N *= 2;
        int k = (int)N;
        N -= k;
        rst += k;
    }
    return rst;
}

int main(void) {
    double N;
    cin >> N;
    int int_N = (int)N;
    int_conv(int_N);
    N -= int_N;
    int a = int_conv(int_N);
    int b = double_conv(N);
    printf("%d.%04d\n", a, b);
    //cout << (double)int_conv(int_N) << "." << (double)double_conv(N) << endl;
    return 0;
}

