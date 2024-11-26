#include <iostream>
#include <cctype>

using namespace std;

int char_to_int(char a) {
    if(isdigit(a)) {
        return a - '0';
    } else {
        return a - 'A' + 10;
    }
}

char int_to_char(int a) {
    if(a < 10) {
        return a + '0';
    } else {
        return a + 'A' - 10;
    }
}

long long N_to_dec(int A, char* S) {
    long long dec = 0;
    for(int i=0; S[i]; ++i) {
        dec *= A;
        dec += char_to_int(S[i]);
    }
    return dec;
}

void dec_to_N(int B, long long S) {
    if(S <= 0)
        return;
    dec_to_N(B, S / B);
    cout << int_to_char(S % B);
}

int main(void) {
    int A, B;
    char S[100];
    cin >> A;
    if(A == 0)
        return 0;
    cin >> S >> B;
    if(S[0] == '0') {
        cout << '0' << endl;
        main();
        return 0;
    }
    dec_to_N(B, N_to_dec(A, S));
    cout << endl;
    main();
}

