#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    int N;
    queue<int> deck;
    cin >> N;
    for(int i=1;i<=N;++i) {
        deck.push(i);
    }
    while(deck.size()) {
        cout << deck.front() << " ";
        deck.pop();
        deck.push(deck.front());
        deck.pop();
    }
    return 0;
}
