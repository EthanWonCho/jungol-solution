#include <cstdio>
using namespace std;
int N, arr[20]; // stores the value of nth
int k[10]; // stores the index of arr

void choose(int depth) {
    if(depth > 6) {
        for(int i=1;i<=6;++i) {
            printf("%d ", arr[k[i]]);
        }
        printf("\n");
        return;
    }
    for(int i=k[depth-1]+1;i<=N;++i) {
        k[depth] = i;
        choose(depth+1);
    }
}

int main(void) {
    scanf("%d", &N);
    for(int i=1;i<=N;++i) {
        scanf("%d", &arr[i]);
    }
    choose(1);
    return 0;
}

