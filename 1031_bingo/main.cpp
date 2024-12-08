#include <cstdio>

typedef struct {
    int x, y;
} coor;

using namespace std;

int main(void) {
    int arr[10][10] = {{0}}, bingo = 0;
    coor loc[30];
    for(int i=0;i<5;++i) {
        for(int j=0;j<5;++j) {
            int temp;
            scanf("%d", &temp);
            loc[temp].y = i;
            loc[temp].x = j;
        }
    }
    int call[30];
    for(int i=0;i<25;++i)
        scanf("%d", &call[i]);

    for(int i=0;i<25;++i) {
        arr[loc[call[i]].y][loc[call[i]].x] = 1;
        // horizontal
        for(int m=0;m<5;++m) {
            if(!arr[loc[call[i]].y][m])
                break;
            if(m == 4) {
                ++bingo;
            }
        }
        // vertical
        for(int m=0;m<5;++m) {
            if(!arr[m][loc[call[i]].x])
                break;
            if(m == 4) {
                ++bingo;
            }
        }
        // diagonal
        if(loc[call[i]].x == loc[call[i]].y) {
            for(int m=0;m<5;++m) {
                if(!arr[m][m])
                    break;
                if(m == 4) {
                    ++bingo;
                }
            }
        }
        if((4 - loc[call[i]].x) == loc[call[i]].y) {
            for(int m=0;m<5;++m) {
                if(!arr[4-m][m])
                    break;
                if(m == 4) {
                    ++bingo;
                }
            }
        }
        if(bingo >= 3) {
            printf("\n%d\n", i+1);
            break;
        }
    }

    return 0;
}

