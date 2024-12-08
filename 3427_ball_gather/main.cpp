#include <cstdio>

int main(void) {
    int N, ballcnt[500010]{}, idx=0, Rcount=0, Bcount=0, rst = 500010;
    char first, last = 'A';
    scanf("%d", &N);
    for(int i=0;i<N;++i) {
        char temp;
        scanf(" %c", &temp);
        if(i == 0) first = temp;
        if(last == temp) {
            ++ballcnt[idx];
        } else {
            ++idx;
            ballcnt[idx] = 1;
            last = temp;
        }
        if(temp == 'R')
            ++Rcount;
        else if(temp == 'B')
            ++Bcount;
    }
    int temp;
    if(first == 'R') {
        temp = Rcount - ballcnt[1];
        if(temp < rst) rst = temp;
    } else if(first == 'B') {
        temp = Bcount - ballcnt[1];
        if(temp < rst) rst = temp;
    }

    if(last == 'R') {
        temp = Rcount - ballcnt[idx];
        if(temp < rst) rst = temp;
    } else if(last == 'B') {
        temp = Bcount - ballcnt[idx];
        if(temp < rst) rst = temp;
    }
    
    if(first == 'R' && last == 'R') {
        if(Bcount < rst) rst = Bcount;
    } else if(first == 'B' && last == 'B') {
        if(Rcount < rst) rst = Rcount;
    }


    printf("%d\n", rst);

    return 0;
}

