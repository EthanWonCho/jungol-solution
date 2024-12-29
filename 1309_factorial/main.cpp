#include <cstdio>

using namespace std;

long long fac(long long k) {
    if(k == 0) {
        return 1;
    } else {
        if(k == 1) {
            printf("1! = 1\n");
            return 1;
        } else {
            printf("%d! = %d * %d!\n", k, k, k-1);
            return k * fac(k-1);
        }
    }

}

int main(void) {
    long long k;
    scanf("%lld", &k);
    k = fac(k);
    printf("%lld\n", k);
    return 0;
}
