#include <cstdio>
#include <vector>

using namespace std;

vector<int> dice(11, 1);
int N, M;

void first(int k) {
    if(k >= N) {
        for(int i=0;i<N;++i) {
            printf("%d ", dice[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=6;++i) {
        dice[k] = i;
        first(k+1);
    }
}

void second(int k) {
    if(k>=N) {
        for(int i=0;i<N;++i) {
            printf("%d ", dice[i]);
        }
        printf("\n");
        return;
    }
    if(k == 0) {
        for(int i=1;i<=6;++i) {
            dice[k] = i;
            second(1);
        }
    } else {
        for(int i=dice[k-1];i<=6;++i) {
            dice[k] = i;
            second(k+1);
        }
    }
    return;
}

void third(int k) {
    if(k >= N) {
        for(int i=0;i<N;++i) {
            printf("%d ", dice[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=6;++i) {
        int flag = 0;
        for(int j=0;j<k;++j) {
            if(i == dice[j]) ++flag;
        }
        if(!flag) {
            dice[k] = i;
            third(k+1);
        }
    }
}

int main(void) {
    scanf("%d%d", &N, &M);
    switch(M){
    case 1:
        first(0);
        break;
    case 2:
        second(0);
        break;
    case 3:
        third(0);
        break;
    }
    return 0;
}

