#include <cstdio>

int main(void) {
    int board[30][30] = {0};
    int add[5][2] = {{-1,1}, {0,1}, {1,1}, {1,0}};
    
    for(int i=1;i<20;++i) {
        for(int j=1;j<20;++j) {
            scanf("%d", &board[i][j]);
        }
    }
    for(int i=1;i<20;++i) {
        for(int j=1;j<20;++j) {
            if(board[i][j] == 0) continue;
            for(int idx=0;idx<4;++idx) {
                int k = board[i+add[idx][0]][j+add[idx][1]];
                if(k == board[i][j]) {
                    //check the opposite
                    if(board[i-add[idx][0]][j-add[idx][1]] == k)
                        continue;
                    for(int l=2;l<5;++l) {
                        if(board[i+l*add[idx][0]][j+l*add[idx][1]] != k)
                            break;
                        if(l == 4) {
                            l = 5;
                            if(board[i+l*add[idx][0]][j+l*add[idx][1]] == k)
                                break;
                            printf("%d\n%d %d\n", k, i, j);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    printf("0\n");
    return 0;
}

