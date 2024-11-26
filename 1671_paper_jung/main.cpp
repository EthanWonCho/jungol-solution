#include <iostream>

using namespace std;

int arr[110][110];

int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int main(void) {
    int paper_n;
    cin >> paper_n;
    for(int i=0;i<paper_n;++i) {
        int x, y;
        cin >> x >> y;
        for(int j=x;j<x+10;++j) {
            for(int k=y;k<y+10;++k) {
                arr[j][k] = 1;
            }
        }
    }
    int rst = 0;
    for(int i=0;i<100;++i) {
        for(int j=0;j<100;++j) {
            if(arr[i][j]){
                for(int k=0;k<4;++k) {
                    int ni = i + dir[k][0];
                    int nj = j + dir[k][1];
                    if(!arr[ni][nj])
                        ++rst;
                }
            }
        }
    }
    cout << rst << endl;
    return 0;
}

