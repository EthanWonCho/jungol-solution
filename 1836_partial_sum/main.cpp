#include <cstdio>
#include <vector>
#include <algorithm>

int main(void) {
    int N;
    int cur = 0;
    int mx = 0;
    scanf("%d", &N);
    for(int i=0;i<N;++i) {
        int temp;
        scanf("%d", &temp);
        cur += temp;
        mx = (mx > cur) ? mx : cur;
        cur = (cur < 0) ? 0 : cur;
    }
    printf("%d", mx);
    return 0;
}

