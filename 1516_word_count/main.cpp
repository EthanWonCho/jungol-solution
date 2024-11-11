#include <iostream>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int main(void) {
    char str[210];
    map<string, int> m;

    fgets(str, 210, stdin);
    strtok(str, "\n\r");
    if(!strcmp(str, "END"))
        return 0;

    //word tokening start
    char* tok = strtok(str, " ");
    while(tok) {
        //do something sexy
        if (m.find(tok) != m.end()) {
            m[tok]++;
        }else {
            m.insert({tok, 1});
        }
        tok = strtok(NULL, " ");
    }
    for (auto iter=m.begin();iter!= m.end();iter++) {
		cout << iter->first << " : " << iter->second << endl;
	}

    main();
}
