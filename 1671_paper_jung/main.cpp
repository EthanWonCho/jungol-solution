#include <iostream>
using namespace std;
int arr[110][110];

int main(void) {
    int n, c = 0;
    cin >> n;
    for(int m=0;m<n;++m) {
        int a, b;
        cin >> a >> b;
        for(int i=a+1;i<=a+10;++i) {
            for(int j=b+1;j<=b+10;++j) {
                arr[i][j] = 1;
            }
        }
    }
    for(int i=0;i<=100;++i) {
        for(int j=0;j<=100;++j) {
            cout << arr[i][j];
            if(arr[i][j]) {
                if(!arr[i-1][j])
                    ++c;
                if(!arr[i+1][j])
                    ++c;
                if(!arr[i][j-1])
                    ++c;
                if(!arr[i][j+1])
                    ++c;
            }
        }
        cout << endl;
    }
    cout << c << endl;
    return 0;
}

