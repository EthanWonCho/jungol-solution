#include <cstdio>
#include <stack>

using namespace std;

int N;

void hanoi(int n, int a, int b, int c) {
    if(!n) {
        return;
    }
    hanoi(n-1, a, c, b);
    printf("%d : %d -> %d\n", n, a, c);
    hanoi(n-1, b, a, c);
    return;
}


int main(void) {
    scanf("%d", &N);
    hanoi(N, 1, 2, 3);
    return 0;
}
