#include <cstdio>
#include <vector>

using namespace std;
int N, arr[110], ans[110];
vector<int> k;

void check(int *trial, int lastidx) {
    for(int i=0;i<=lastidx;++i) {
        if(trial[i] == arr[trial[lastidx]]) {
            for(int j=i;j<=lastidx;++j) {
                ++ans[trial[j]];
            }
            return;
        }
    }
    trial[lastidx+1] = arr[trial[lastidx]];
    check(trial, lastidx+1);
}

int main(void) {
    scanf("%d", &N);
    for(int i=1;i<=N;++i) {
        scanf("%d", &arr[i]);
    }
    int trial[110];
    for(int i=1;i<=N;++i) {
        if(ans[i]) continue;
        trial[0] = i;
        check(trial, 0);
    }
    int count = 0;
    for(int i=1;i<=N;++i) {
        if(ans[i]) {
            k.push_back(i);
            ++count;
        }
    }
    printf("%d\n", count);
    for(auto i=k.begin();i != k.end();++i)
        printf("%d\n", *i);
    
    return 0;
}

