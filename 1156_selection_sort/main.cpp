#include <iostream>
using namespace std;

int main(void) {
    int len, arr[110], idx = 0;
    cin >> len;
    for(int i=0;i<len;++i) {
        cin >> arr[i];
    }
    while(idx != len-1) {
        /// find min's idx. min's value isn't needed for the program
        int minval = 110, minidx = -1;
        for(int i=idx;i<len;++i) {
            if(minval > arr[i]) {
                minval = arr[i];
                minidx = i;
            }
        }
        if(minidx != -1) {
            /// swap the front and the min
            arr[minidx] = arr[idx];
            arr[idx] = minval;
        }
        ++idx;
        for(int i=0;i<len;++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
