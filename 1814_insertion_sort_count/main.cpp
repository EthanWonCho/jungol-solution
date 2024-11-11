#include <iostream>
using namespace std;
int n, arr[110];

void print_shit() {
    for(int i=0;i<n;++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int main(void) {
    cin >> n;
    int cnt = 0;
    for(int i=0;i<n;++i)
        cin >> arr[i];

    for(int idx=1;idx<n;++idx) {
        for(int i=idx-1;i>=0;--i) {
            if(arr[i+1] < arr[i]) {
                int buf = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = buf;
                ++cnt;
            }else{
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}

