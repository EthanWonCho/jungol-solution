#include <cstdio>
using namespace std;

int n, r, arr[20], rst, pascal[20][20], prog;

void calc_pascal(int N) {
    if(N <= prog) {
        return;
    }
    ++prog;
    pascal[prog][0] = 1;
    pascal[prog][prog] = 1;
    for(int i=1;i<prog;++i) {
        pascal[prog][i] = pascal[prog-1][i-1] + pascal[prog-1][i];
    }
    calc_pascal(N);
    return;
}

int loop(int k) {
    if(k > r) {
        return 0;
    }
    if(arr[k-1] >= arr[k] || arr[r] > n) {
        return 1;
    }
    for(int i=arr[k-1] + 1;i<arr[k];++i) {
        rst += pascal[n-i][r-k];
    }
    return loop(k+1);
}

int main(void) {
    scanf("%d%d", &n, &r);
    pascal[0][0] = 1;
    calc_pascal(n);
    for(int i=1;i<=r;++i) {
        scanf("%d", &arr[i]);
    }
    if(loop(1)) {
        printf("None\n");
    } else {
        printf("%d\n", rst+1);
    }

    return 0;
}

