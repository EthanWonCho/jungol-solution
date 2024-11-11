#include <iostream>
using namespace std;
char arr[110][110];

int main(void) {
    int n, c = 0;
    cin >> n;
    for(int m=0;m<n;++m) {
        int a, b;
        cin >> a >> b;
        for(int i=a;i<a+10;++i) {
            for(int j=b;j<b+10;++j) {
                arr[i][j] = 'k';
            }
        }
    }
    for(int i=0;i<100;++i) {
        for(int j=0;j<100;++j) {
            if(arr[i][j])
                ++c;
        }
    }
    cout << c << endl;
    return 0;
}

