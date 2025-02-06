#include <cstdio>
#include <vector>

using namespace std;

vector<int> dice(11, 1);
int N, S;

void first(int k, int sum) {
    if(k >= N) {
        if(sum == S) {
            for(int i=0;i<N;++i) {
                printf("%d ", dice[i]);
            }
            printf("\n");
        }
        return;
    }
    // if(sum >= S) return;

    for(int i=1;i<=6;++i) {
        dice[k] = i;
        first(k+1, sum+i);
    }
}

int main(void) {
    scanf("%d%d", &N, &S);
    first(0, 0);
    return 0;
}

