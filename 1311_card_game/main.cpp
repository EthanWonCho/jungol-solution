#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<char> color;
map<char, int> colorcount = {{'R', 0}, {'B', 0}, {'Y', 0}, {'G', 0} };
vector<int> number;
vector<int> numbercount(10, 0);

int rst = 0;

int iscolor_same() {
    char compare = color[0];
    for(int i=1;i<5;++i) {
        if(compare != color[i]) {
            return 0;
        }
    }
    return 1;
}

int isnumber_same(int K, int except) {
    if(K == 5) {
        int compare = number[0];
        for(int i=1;i<5;++i) {
            if(compare != number[i]) {
                return 0;
            }
        }
        return 1;
    } else {
        for(int i = 1; i < 10; ++i) {
            if(i != except && numbercount[i] >= K) {
                return i;
            }
        }
        return 0;
    }
}

int isnumber_consec(void) {
    for(int i=1;i<10;++i) {
        if(numbercount[i] > 1) {
            return 0;
        } else if(numbercount[i] == 1) {
            // test if this continues
            int j = i;
            for(;j<i+5;++j) {
                if(numbercount[j] != 1) return 0;
            }
            return j-1;
        }
    }
    return 0;
}

int highest(void) {
    int rst = 0;
    for(int k : number) {
        if(rst < k) {
            rst = k;
        }
    }
    return rst;
}

void result(int k) {
    if(rst < k) rst = k;
    return;
}

int main(void) {
    for(int i=0;i<5;++i) {
        char c;
        int n;
        cin >> c >> n;
        color.push_back(c);
        ++colorcount[c];
        number.push_back(n);
        ++numbercount[n];
    }
    int flag = 0;
    int i = isnumber_consec();
    if(iscolor_same() && i) {
        result(900+i);
        ++flag;
    }
    i = isnumber_same(4, 0);
    if(i) {
        result(800+i);
        ++flag;
    }
    int three = isnumber_same(3, 0);
    int two = isnumber_same(2, three);
    if(three && two) {
        result(three * 10 + two + 700);
        ++flag;
    }
    if(iscolor_same()) {
        result(highest() + 600);
        ++flag;
    }
    i = isnumber_consec();
    if(i) {
        result(i+500);
        ++flag;
    }
    i = isnumber_same(3, 0);
    if(i) {
        result(i+400);
        ++flag;
    }
    
    int first = isnumber_same(2, 0);
    int second = isnumber_same(2, first);
    if(first && second) {
        result(max(first, second) * 10 + min(first, second) + 300);
        ++flag;
    }
    
    i = isnumber_same(2,0);
    if(i) {
        result(i+200);
        ++flag;
    }
    if(!flag) {
        result(highest() + 100);
    }

    cout << rst << endl;
    
    return 0;

}
