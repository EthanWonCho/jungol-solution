#include <iostream>
using namespace std;
int n, arr[110], last_arr[110];

void swap(void) {
    for(int i=0;i<n;++i) {
        last_arr[i] = arr[i];
    }
    return;
}

void sweep(void) {
    for(int i=1;i<n;++i) {
        if(arr[i] < arr[i-1]) {
            //交換
            int buf = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = buf;
        }
    }
    return;
}

void print_shit() {
    for(int i=0;i<n;++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}

int main(void) {
    cin >> n;
    for(int i=0;i<n;++i) {
        cin >> arr[i];
        last_arr[i] = arr[i];
    }

    for(int i=1;i<n;++i) {
        swap();
        sweep();
        print_shit();
    }
    return 0;
}

