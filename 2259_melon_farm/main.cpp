#include <iostream>
using namespace std;

int main(void) {
    int K;
    int nextdir[] = {0, 4, 3, 1, 2};
    int direction[7];
    int length[7];
    int naka_size = 0;
    cin >> K;
    for(int i=0;i<6;++i) {
        cin >> direction[i] >> length[i];
    }
    direction[6] = direction[0];
    length[6] = length[0];
    for(int i=0;i<7;++i) {
        if(nextdir[direction[i]] != direction[i+1]) {
            naka_size = length[i] * length[i+1];
            break;
        }
    }
    //max from 1, 2
    int max12 = 0, max34 = 0;
    for(int i=0;i<6;++i) {
        if((direction[i] == 1 || direction[i] == 2) && length[i] > max12)
            max12 = length[i];
        if((direction[i] == 3 || direction[i] == 4) && length[i] > max34)
            max34 = length[i];
    }
    cout << (max12 * max34 - naka_size) * K << endl;

    return 0;

}
